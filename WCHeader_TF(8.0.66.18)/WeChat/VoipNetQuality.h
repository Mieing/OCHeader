@interface VoipNetQuality : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) int begin;
@property (nonatomic) int end;
@property (nonatomic) int hitCnt;

+ (void)initialize;

@end
