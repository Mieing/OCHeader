@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderChannelFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int feedbackType;
@property (nonatomic) unsigned int channelType;
@property (retain, nonatomic) NSString *channelIdStr;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) unsigned int channelStyle;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
