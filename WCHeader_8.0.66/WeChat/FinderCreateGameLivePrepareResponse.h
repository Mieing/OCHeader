@class NSString, FinderCreateLiveWarnPage, FinderMedia, BaseResponse;

@interface FinderCreateGameLivePrepareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *gameLivePrepareBuff;
@property (nonatomic) unsigned int noNeedRedirect;
@property (retain, nonatomic) FinderCreateLiveWarnPage *warnPage;
@property (nonatomic) BOOL notPassOpenidToGame;
@property (retain, nonatomic) FinderMedia *coverImg;

+ (void)initialize;

@end
