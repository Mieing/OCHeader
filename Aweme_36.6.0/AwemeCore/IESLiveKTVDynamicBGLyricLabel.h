@class UIView, IESLiveOutsideStrokeLabel, IESLiveKTVDynamicBGLyricItem, NSString, NSNumber, NSMutableDictionary, UILabel, IESLiveLyricViewConfig;

@interface IESLiveKTVDynamicBGLyricLabel : UIView

@property (retain, nonatomic) UILabel *lyricLabel;
@property (retain, nonatomic) IESLiveOutsideStrokeLabel *maskLabel;
@property (retain, nonatomic) UIView *maskLabelContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskFrame;
@property (nonatomic) long long position;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL delay;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricItem *lyricItem;
@property (retain, nonatomic) NSMutableDictionary *wordWidthCache;
@property (nonatomic) double lyricsWidth;
@property (nonatomic) double lyricsLeftOffset;
@property (copy, nonatomic) NSString *lyric;
@property (nonatomic) double curContainerWidth;
@property (retain, nonatomic) NSNumber *strokeWidth;

- (void)updateConfig:(id)a0;
- (void)freshAllFrame;
- (void)calcLyricWidth:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lyricItem:(id)a1 config:(id)a2;
- (void)updateInitializedStatus:(BOOL)a0;
- (void)updateProgress:(double)a0 wordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
