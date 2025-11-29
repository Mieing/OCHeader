@class NSString;

@interface MegaVideoMediaSpec : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileFormat;
@property (nonatomic) unsigned int firstLoadBytes;
@property (nonatomic) unsigned int bitRate;
@property (retain, nonatomic) NSString *codingFormat;
@property (nonatomic) unsigned int durationMs;

+ (void)initialize;

@end
