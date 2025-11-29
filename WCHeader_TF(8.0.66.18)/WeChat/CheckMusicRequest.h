@class BaseRequest, NSString;

@interface CheckMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverImg;
@property (retain, nonatomic) NSString *coverImgHd;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *lowBandUrl;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *singer;

+ (void)initialize;

@end
