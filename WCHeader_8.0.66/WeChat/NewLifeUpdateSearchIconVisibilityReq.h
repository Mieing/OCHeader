@class NewLifeSearchStreamResult;

@interface NewLifeUpdateSearchIconVisibilityReq : WXPBGeneratedMessage

@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) NewLifeSearchStreamResult *searchResult;
@property (nonatomic) BOOL isFromReEnterHomePage;

+ (void)initialize;

@end
