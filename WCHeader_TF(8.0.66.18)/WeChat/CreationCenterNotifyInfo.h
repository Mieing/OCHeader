@class NSString;

@interface CreationCenterNotifyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int redPoint;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) unsigned int pollInterval;
@property (nonatomic) unsigned int ignore;

+ (void)initialize;

@end
