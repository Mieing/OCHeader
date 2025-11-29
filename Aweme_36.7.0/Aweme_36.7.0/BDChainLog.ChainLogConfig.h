@interface BDChainLog.ChainLogConfig : NSObject <BDChainLogConfigBridgeProtocol> {
    void /* unknown type, empty encoding */ globalEnable;
    void /* unknown type, empty encoding */ assertEnable;
    void /* unknown type, empty encoding */ moduleAllowList;
    void /* unknown type, empty encoding */ linkAllowList;
    void /* unknown type, empty encoding */ sourceLocationAllowList;
    void /* unknown type, empty encoding */ allowCheckExpandBraceEnable;
    void /* unknown type, empty encoding */ allowCheckWildcardAlgorithm;
    void /* unknown type, empty encoding */ allowCheckCacheEnable;
    void /* unknown type, empty encoding */ moduleAllowCheckCacheLimit;
    void /* unknown type, empty encoding */ linkAllowCheckCacheLimit;
    void /* unknown type, empty encoding */ sourceAllowCheckCacheLimit;
    void /* unknown type, empty encoding */ messageSeparator;
    void /* unknown type, empty encoding */ addSelfAddr;
    void /* unknown type, empty encoding */ validNodeCacheEnable;
    void /* unknown type, empty encoding */ checkGateway;
    void /* unknown type, empty encoding */ nodeInfoPrefix;
    void /* unknown type, empty encoding */ beginShortenParamKey;
    void /* unknown type, empty encoding */ endShortenParamKey;
    void /* unknown type, empty encoding */ beginParamKeyAddLineNumber;
    void /* unknown type, empty encoding */ endParamKeyAddLineNumber;
    void /* unknown type, empty encoding */ beginCollectNodeInfo;
    void /* unknown type, empty encoding */ endCollectNodeInfo;
    void /* unknown type, empty encoding */ paramValueLengthLimit;
    void /* unknown type, empty encoding */ warnAutoAssert;
    void /* unknown type, empty encoding */ errorAutoAssert;
    void /* unknown type, empty encoding */ warnAutoTrack;
    void /* unknown type, empty encoding */ errorAutoTrack;
    void /* unknown type, empty encoding */ endOmitFileName;
    void /* unknown type, empty encoding */ endOmitFuncName;
    void /* unknown type, empty encoding */ endOmitModule;
    void /* unknown type, empty encoding */ endOmitLinks;
    void /* unknown type, empty encoding */ endOmitAddr;
    void /* unknown type, empty encoding */ statisticEnable;
    void /* unknown type, empty encoding */ statisticTrackOccasions;
}

+ (BOOL)bridge_globalEnable;
+ (BOOL)bridge_addSelfAddr;

- (void).cxx_destruct;
- (id)init;

@end
