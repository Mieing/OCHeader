@class NSString;

@interface IESECFeedRecommendExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) BOOL isFollowingOriginAuthor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
