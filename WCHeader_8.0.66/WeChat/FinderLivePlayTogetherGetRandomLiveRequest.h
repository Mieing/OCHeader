@class PlayTogetherRandomLiveContext, BaseRequest, FinderLiveClientStatus, NSData, FinderBaseRequest, FinderClientStatus, NSString;

@interface FinderLivePlayTogetherGetRandomLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) NSString *themeId;
@property (retain, nonatomic) PlayTogetherRandomLiveContext *randomLiveContext;

+ (void)initialize;

@end
