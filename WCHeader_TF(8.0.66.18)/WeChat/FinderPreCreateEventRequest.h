@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPreCreateEventRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventDescription;
@property (retain, nonatomic) NSString *eventCoverImgUrl;
@property (nonatomic) unsigned long long eventEndTime;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
