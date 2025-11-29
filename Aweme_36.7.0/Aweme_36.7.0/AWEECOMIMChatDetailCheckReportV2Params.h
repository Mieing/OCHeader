@class NSString;

@interface AWEECOMIMChatDetailCheckReportV2Params : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bizServiceEntityId;
@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *talkId;
@property (copy, nonatomic) NSString *fromSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
