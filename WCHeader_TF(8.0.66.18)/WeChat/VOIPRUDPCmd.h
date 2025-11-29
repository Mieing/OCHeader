@class NSData;

@interface VOIPRUDPCmd : WXPBGeneratedMessage

@property (nonatomic) int cmdType;
@property (retain, nonatomic) NSData *cmdBuffer;

+ (void)initialize;

@end
