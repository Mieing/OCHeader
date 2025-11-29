@class NSArray, NSDictionary, NSString;

@interface AWECFDormant : NSObject <BDQuaterbackConfigProtocol>

@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *appVersionList;
@property (copy, nonatomic) NSArray *lazyLoadDlibList;
@property (copy, nonatomic) NSDictionary *exportSymbols;
@property (copy, nonatomic) NSDictionary *osVersionRange;
@property (copy, nonatomic) NSString *loadEnable;
@property (nonatomic) BOOL racEnable;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) int hookType;
@property (nonatomic) BOOL enableLoadIntime;
@property (nonatomic) BOOL enableCallFuncLog;
@property (nonatomic) BOOL enableModInitLog;
@property (nonatomic) BOOL enablePrintLog;
@property (nonatomic) BOOL enableInstExecLog;
@property (nonatomic) BOOL enableInstCallFrameLog;
@property (nonatomic) BOOL enableSymbolLookUpLog;
@property (nonatomic) BOOL serializeNativeSymbolLookup;
@property (nonatomic) long long bindSymbolMaxConcurrentOperationCount;
@property (nonatomic) BOOL enableRelativePointerSupport;
@property (nonatomic) BOOL enableLegacySymbolLookUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
