@class NSString, FinderJumpInfo, NSMutableArray;

@interface FinderLiveGetPairingTabResponse_PairingInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long pairingId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) FinderJumpInfo *titleJumpInfo;
@property (retain, nonatomic) NSMutableArray *imgList;
@property (retain, nonatomic) NSMutableArray *productList;

+ (void)initialize;

@end
