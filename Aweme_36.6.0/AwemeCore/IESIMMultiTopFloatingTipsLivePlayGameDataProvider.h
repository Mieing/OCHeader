@interface IESIMMultiTopFloatingTipsLivePlayGameDataProvider : AWEIMComponentBase <IESIMMultiTopFloatingTipsDataProviderInterface> {
    void /* unknown type, empty encoding */ uniqueIdToIconView;
    void /* unknown type, empty encoding */ uniqueIdToUserAvatarsStackView;
    void /* unknown type, empty encoding */ uniqueIdToIconViewSize;
    void /* unknown type, empty encoding */ userManager;
}

@property (nonatomic) long long type;

- (void)componentDidMounted:(id)a0;
- (id)makeIconViewWithModel:(id)a0 userBarDataModels:(id)a1;
- (struct CGSize { double x0; double x1; })makeIconViewSizeWithModel:(id)a0;
- (void)didShowWithModel:(id)a0 urlString:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
