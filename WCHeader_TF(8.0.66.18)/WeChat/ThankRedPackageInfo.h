@class NSString, FinderJumpInfo_Html5Info, FinderJumpInfo_MiniAppInfo;

@interface ThankRedPackageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int redpackageProgress;
@property (retain, nonatomic) NSString *bannerWording;
@property (retain, nonatomic) FinderJumpInfo_MiniAppInfo *miniAppInfo;
@property (retain, nonatomic) FinderJumpInfo_Html5Info *h5Info;

+ (void)initialize;

- (BOOL)jumpActionFromVC:(id)a0;

@end
