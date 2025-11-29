@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMBasicCoreSDKConfig : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) double currentFreeDiskSpace;

+ (id)imServerURL;
+ (Class)aAWEIMModuleConfigAdapterProtocolClass;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)sharedInstance;

- (double)freeDiskSpace;
- (id)getGlobalConfig;
- (void)p_getFreeDiskSpace;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)p_modifiedGroupTypesEnabledInFoldBox;
- (id)p_lcMessageHandleAllowedSourceArray;
- (id)rebuildErrorCode;
- (void).cxx_destruct;
- (id)init;
- (id)getOptions:(id)a0;

@end
