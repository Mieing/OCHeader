@class FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo, NSMutableArray;

@interface FinderGetWindowProductProfileCardInfoResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productCount;
@property (retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo *profileInfo;
@property (retain, nonatomic) NSMutableArray *products;

+ (void)initialize;

@end
