@class NSString, NSMutableArray;

@interface GetWxaGameConfigResponse_WxagGameOriginalReviewConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *questionId;
@property (retain, nonatomic) NSString *questionDesc;
@property (retain, nonatomic) NSMutableArray *optionList;
@property (retain, nonatomic) NSString *thanksWording;
@property (nonatomic) unsigned int minPlayingSeconds;
@property (retain, nonatomic) NSString *title;

+ (void)initialize;

@end
