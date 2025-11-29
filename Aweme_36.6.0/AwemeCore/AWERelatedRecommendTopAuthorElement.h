@class UIView;

@interface AWERelatedRecommendTopAuthorElement : AWERelatedRecommendTopBaseElement <AWEVideoDescriptionPanelAuthorViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_router;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double bottomSpacing;

- (void)authorInfoClicked:(id)a0 clickType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataModel:(id)a0;

@end
