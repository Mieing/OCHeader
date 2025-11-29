@interface MMFinderLiveKSKitMusicNote : NSObject

@property (nonatomic) int beginTime;
@property (nonatomic) int duration;
@property (nonatomic) int noteHeight;
@property (nonatomic) double noteHeightPercent;
@property (nonatomic) int noteValue;

+ (id)genKSMusicNoteWithBegin:(int)a0 duration:(int)a1 noteHeight:(int)a2 noteValue:(int)a3;
+ (id)genKSMusicNoteWithBegin:(int)a0 duration:(int)a1 noteHeight:(int)a2;
+ (double)transferNoteValueToPercent:(float)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })musicNoteRange;

- (void)checkMistakeWithNoteHeight:(float)a0 noteValue:(float)a1;
- (BOOL)isValid;
- (id)description;

@end
