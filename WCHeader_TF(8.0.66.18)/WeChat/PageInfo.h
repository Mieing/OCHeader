@class NSString, BaseEvent;

@interface PageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BaseEvent *baseEvent;
@property (retain, nonatomic) NSString *pagename;
@property (nonatomic) int action;
@property (nonatomic) int outType;

+ (void)initialize;

@end
