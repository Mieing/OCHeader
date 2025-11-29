@class NSString;

@interface AWEECShoppingGuideMessageSyncModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *searchResultType;
@property (copy, nonatomic) NSString *searchResultForm;
@property (copy, nonatomic) NSString *strategyType;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
