@interface V2TXLivePusherStatistics : NSObject

@property (nonatomic) unsigned long long appCpu;
@property (nonatomic) unsigned long long systemCpu;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long fps;
@property (nonatomic) unsigned long long videoBitrate;
@property (nonatomic) unsigned long long audioBitrate;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long netSpeed;

- (id)description;

@end
