@class NSMutableArray;

@interface RivalsRecommendResponse_BannerArea : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *groupsArray;
@property (readonly, nonatomic) unsigned long long groupsArray_Count;

+ (id)descriptor;

@end
