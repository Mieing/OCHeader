@class NSArray, NSNumber, NSString;

@interface AWEQuickReplyListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *replyModels;
@property (retain, nonatomic) NSNumber *maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replyModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
