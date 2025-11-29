@class WxaCommentDishInfo, WxaCommentInfo, BaseResponse;

@interface AfterLaunchWxaAppResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaCommentInfo *comment;
@property (retain, nonatomic) WxaCommentDishInfo *commentDish;
@property (nonatomic) unsigned int showLowScoreBanner;

+ (void)initialize;

@end
