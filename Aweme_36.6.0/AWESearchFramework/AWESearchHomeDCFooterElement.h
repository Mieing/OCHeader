@class NSString, AWESearchDynamicEngine;

@interface AWESearchHomeDCFooterElement : AWEDCFeedBaseCellElement <AWESearchDynamicEngineDelegate>

@property (retain, nonatomic) AWESearchDynamicEngine *dynamicEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (double)lastBottomMargin;
+ (long long)elementStyle;
+ (id)currentAwemeModelLynxExtra:(id)a0;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)loadLynx;
- (void)registerEvent;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)tokenTypeForModel:(id)a0;
- (void)updateHeight:(double)a0;
- (void)setupSubViews;
- (void)buildSearchExtraModelIfNeed;
- (void)loadLynxIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
