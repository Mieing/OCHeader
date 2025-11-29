@class NSString, AWESearchAIGCCmdArgsModel, NSDictionary, AWESearchAIGCContainerInfoModel, AWESearchAIGCTabConfig;

@interface AWESearchAIGCCmdModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cmdStr;
@property (copy, nonatomic) NSString *voiceCMD;
@property (retain, nonatomic) AWESearchAIGCCmdArgsModel *args;
@property (retain, nonatomic) AWESearchAIGCContainerInfoModel *containerInfo;
@property (copy, nonatomic) NSDictionary *display;
@property (copy, nonatomic) NSDictionary *appendQueryInfo;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sseKey;
@property (copy, nonatomic) NSDictionary *serverLog;
@property (nonatomic) BOOL intentionContainsCanvas;
@property (nonatomic) BOOL isLastRenderCard;
@property (retain, nonatomic) AWESearchAIGCTabConfig *tabConfig;
@property (nonatomic) BOOL isKeepAliveCmd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerInfoJSONTransformer;
+ (id)argsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tabConfigJSONTransformer;

- (void).cxx_destruct;

@end
