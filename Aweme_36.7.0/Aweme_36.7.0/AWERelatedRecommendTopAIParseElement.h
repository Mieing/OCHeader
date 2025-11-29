@class UIView;

@interface AWERelatedRecommendTopAIParseElement : AWERelatedRecommendTopBaseElement <AWEFeedRelatedVideoCardAIParseInfoViewDelegate> {
    void /* unknown type, empty encoding */ hasRequested;
    void /* unknown type, empty encoding */ seekingToTime;
    void /* unknown type, empty encoding */ hasSetupChapterEvent;
    void /* unknown type, empty encoding */ panelStyle;
    void /* unknown type, empty encoding */ startOffset;
    void /* unknown type, empty encoding */ visibleHeight;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ isPanelShowing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoView;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double bottomSpacing;

- (void)didTapChapterWithTimestamp:(id)a0;
- (void)didClickWithMethod:(id)a0;
- (void)didCloseWithMethod:(id)a0;
- (void)updateElementUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataModel:(id)a0;
- (void)updateUI;

@end
