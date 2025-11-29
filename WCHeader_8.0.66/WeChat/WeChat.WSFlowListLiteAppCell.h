@interface WeChat.WSFlowListLiteAppCell : MMTableViewCell {
    void /* unknown type, empty encoding */ contentViewMarginLeftRight;
    void /* unknown type, empty encoding */ contentViewMarginTop;
    void /* unknown type, empty encoding */ contentViewMarginBottom;
    void /* unknown type, empty encoding */ contentContainerIndicatorView;
    void /* unknown type, empty encoding */ liteAppSnapshotView;
    void /* unknown type, empty encoding */ footerView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ model;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contentContainerView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ liteAppView;
@property (nonatomic) void /* unknown type, empty encoding */ isRenderFinish;
@property (nonatomic) void /* unknown type, empty encoding */ indexInList;
@property (nonatomic) void /* unknown type, empty encoding */ isActive;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)addLiteAppViewWithLiteAppView:(id)a0;
- (void)removeLiteAppView;
- (void)setSnapshotWithImageView:(id)a0;
- (void)removeSnapshot;
- (void)clearCell;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
