@class UIColor, MMFinderLiveKSKitMusicNote, UIView, NSMutableArray;

@interface MMFinderLiveKSKitMusicNoteLine : UIView

@property (retain, nonatomic) NSMutableArray *hitLineList;
@property (retain, nonatomic) MMFinderLiveKSKitMusicNote *musicNote;
@property (retain, nonatomic) UIView *progressLine;
@property (retain, nonatomic) UIColor *hitlineColor;

+ (double)preferHeight;

- (id)initWithMusicNote:(id)a0;
- (void)initDefaultUI;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHitLines;
- (double)preferWidth;
- (void)addHitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)createHitLineWithHitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;

@end
