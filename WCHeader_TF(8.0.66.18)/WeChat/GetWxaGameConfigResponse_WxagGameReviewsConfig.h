@class NSString;

@interface GetWxaGameConfigResponse_WxagGameReviewsConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *milestonePicUrl;
@property (retain, nonatomic) NSString *summaryWording;
@property (retain, nonatomic) NSString *detailWording;
@property (retain, nonatomic) NSString *commentWording;
@property (retain, nonatomic) NSString *jumpButtonLabel;
@property (retain, nonatomic) NSString *jumpTargetUrl;
@property (nonatomic) unsigned int minPlayingSeconds;
@property (retain, nonatomic) NSString *reportData;

+ (void)initialize;

@end
