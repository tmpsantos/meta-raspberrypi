RPIFW_SRCREV ?= "c230b2b9b5a38615a4ab17539c3b438064fe5d83"
RPIFW_DATE ?= "20160317"
RPIFW_SRC_URI ?= "git://github.com/raspberrypi/firmware.git;protocol=git;branch=master"
RPIFW_S ?= "${WORKDIR}/git"

SRC_URI = "${RPIFW_SRC_URI}"
SRCREV = "${RPIFW_SRCREV}"
PV = "${RPIFW_DATE}"
