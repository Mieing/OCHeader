@class NSString, FinderLiveErrorPage, FinderObject, FinderLiveAdInfo, FinderCreateLiveWarnPage, BaseResponse;

@interface FinderCreateLiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderObject *liveObject;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;
@property (retain, nonatomic) FinderLiveAdInfo *liveAdInfo;
@property (nonatomic) unsigned long long bulletinSeq;
@property (retain, nonatomic) FinderCreateLiveWarnPage *warnPage;

+ (void)initialize;

@end
