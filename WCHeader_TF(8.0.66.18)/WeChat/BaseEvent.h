@class NSString;

@interface BaseEvent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int channel;

+ (void)initialize;

@end
