@class NSString, NSArray;

@interface AWEPOIFeedUgcReplyGroupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *replyCntNum;
@property (copy, nonatomic) NSString *replyListSchema;
@property (copy, nonatomic) NSArray *replyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
