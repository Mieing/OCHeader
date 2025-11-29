@class UIView;

@interface AWERelatedRecommendImpl.RelatedRecommendTopMentionedElement : AWERelatedRecommendTopBaseElement {
    void /* unknown type, empty encoding */ _skeletonView;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deconstructGuessWordView;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *skeletonView;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double bottomSpacing;

+ (id)createWithContext:(id)a0 container:(id)a1 currentModel:(id)a2;

- (id)horizontalGestureRecognizers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataModel:(id)a0;
- (void)updateUI;

@end
