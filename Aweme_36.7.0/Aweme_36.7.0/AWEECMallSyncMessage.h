@class NSString, NSDictionary;

@interface AWEECMallSyncMessage : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isLaunchedMessage;
@property (nonatomic) long long msgType;
@property (nonatomic) long long msgSubType;
@property (copy, nonatomic) NSString *msgUniqId;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isShowingMessage;
- (BOOL)isHiddenMessage;
- (void).cxx_destruct;

@end
