@class NSData;

@interface F2FXChgData : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSData *buffer;

+ (void)initialize;

@end
