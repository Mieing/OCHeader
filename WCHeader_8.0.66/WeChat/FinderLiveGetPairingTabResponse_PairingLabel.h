@class NSString, FinderJumpInfo;

@interface FinderLiveGetPairingTabResponse_PairingLabel : WXPBGeneratedMessage

@property (nonatomic) unsigned long long x;
@property (nonatomic) unsigned long long y;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) FinderJumpInfo *labelJumpInfo;

+ (void)initialize;

@end
