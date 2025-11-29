@class NSString;

@interface SimWord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *word;
@property (nonatomic) float confidence;

+ (void)initialize;

@end
