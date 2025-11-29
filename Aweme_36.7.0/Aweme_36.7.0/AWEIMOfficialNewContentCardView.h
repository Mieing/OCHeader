@class AWEIMOfficialContentDetailCardView;

@interface AWEIMOfficialNewContentCardView : AWEIMDYOfficialContentCardView

@property (retain, nonatomic) AWEIMOfficialContentDetailCardView *contentContainerView;

- (void)addConstrains;
- (void)__addSubViews;
- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)configNumberInfoView;
- (BOOL)hasNumberInfoStruct;
- (void)hiddenIgnoreLabel:(BOOL)a0;
- (void).cxx_destruct;

@end
