@class NSString;

@interface Share : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *messageTitle;
@property (retain, nonatomic) NSString *messageDetail;
@property (retain, nonatomic) NSString *timelineDetail;
@property (retain, nonatomic) NSString *webUrl;
@property (nonatomic) BOOL toMessage;
@property (nonatomic) BOOL toTimeline;

+ (void)initialize;

@end
