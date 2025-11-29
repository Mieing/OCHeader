@class NSArray, AWECodeGenCEMBannerModel;

@interface AWECodeGenV2CommentSelfInteractionListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *interactiveListModelArray;
@property (retain, nonatomic) AWECodeGenCEMBannerModel *bannerModel;
@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
