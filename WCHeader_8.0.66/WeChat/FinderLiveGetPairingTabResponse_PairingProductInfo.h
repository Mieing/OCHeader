@class NSString, FinderJumpInfo;

@interface FinderLiveGetPairingTabResponse_PairingProductInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) FinderJumpInfo *productJumpInfo;

+ (void)initialize;

@end
