@class NSString, NSData;

@interface EcsOpenEventInfo : WXPBGeneratedMessage

@property (nonatomic) int from;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *stringData;
@property (retain, nonatomic) NSData *bytesData;

+ (void)initialize;

@end
