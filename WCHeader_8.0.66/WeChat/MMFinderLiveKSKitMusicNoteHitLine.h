@class MMFinderLiveKSKitMusicNote;

@interface MMFinderLiveKSKitMusicNoteHitLine : UIView

@property (weak, nonatomic) MMFinderLiveKSKitMusicNote *rootMusicNote;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } hitRange;

- (id)initWithRootMusicNote:(id)a0;
- (BOOL)addHitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)checkHitRangeIsContinuous:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateSelfLeftAndWidth;
- (void).cxx_destruct;

@end
