@class NSString;

@interface MBApiFlutterAdExposeInfo : WXPBGeneratedMessage

@property (nonatomic) int cardType;
@property (retain, nonatomic) NSString *frameSetName;
@property (nonatomic) int exposeType;
@property (nonatomic) unsigned long long exposeTime;

+ (void)initialize;

- (void)setExposeTime:(unsigned long long)a0;
- (unsigned long long)exposeTime;
- (void)setExposeType:(int)a0;
- (int)exposeType;
- (void)setFrameSetName:(id)a0;
- (id)frameSetName;
- (void)setCardType:(int)a0;
- (int)cardType;

@end
