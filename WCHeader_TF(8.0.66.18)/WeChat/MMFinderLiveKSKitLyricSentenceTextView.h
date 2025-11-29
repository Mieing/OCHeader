@class UIColor, NSMutableArray;

@interface MMFinderLiveKSKitLyricSentenceTextView : UIView

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSMutableArray *lyricLabelList;

+ (id)lyricWordFont;

- (id)initWithLyricWords:(id)a0 textColor:(id)a1;
- (void)layoutSubviews;
- (void)createLyricLabels:(id)a0;
- (id)createLyricLabel:(id)a0;
- (void)updateSelfSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLyricLabelsCenterY;
- (void).cxx_destruct;

@end
