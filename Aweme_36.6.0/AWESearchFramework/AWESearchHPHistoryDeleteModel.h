@class NSString;

@interface AWESearchHPHistoryDeleteModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
