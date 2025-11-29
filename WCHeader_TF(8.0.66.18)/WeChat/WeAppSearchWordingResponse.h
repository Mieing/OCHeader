@class WeAppSearchWordingTitle, BaseResponse;

@interface WeAppSearchWordingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WeAppSearchWordingTitle *title;
@property (retain, nonatomic) WeAppSearchWordingTitle *titleDesktop;
@property (retain, nonatomic) WeAppSearchWordingTitle *titleDesktopMore;

+ (void)initialize;

@end
