@class NSMutableArray;

@interface CreateInfoResponse_BannerList : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *bannersArray;
@property (readonly, nonatomic) unsigned long long bannersArray_Count;

+ (id)descriptor;

@end
