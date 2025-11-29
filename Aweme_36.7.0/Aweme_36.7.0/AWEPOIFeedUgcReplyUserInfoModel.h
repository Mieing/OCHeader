@class NSString, NSDictionary, NSArray, NSNumber, AWEURLModel;

@interface AWEPOIFeedUgcReplyUserInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *userTagsHeight;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSDictionary *clickEvent;
@property (copy, nonatomic) NSArray *originUserTags;
@property (retain, nonatomic) NSArray *userTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originUserTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (double)userTagSpacing;
- (unsigned long long)userTagSplitType;
- (void).cxx_destruct;

@end
