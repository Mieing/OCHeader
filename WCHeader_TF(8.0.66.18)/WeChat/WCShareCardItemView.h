@class NSArray, WCShareCardData, NSString, UIView;

@interface WCShareCardItemView : MMUIView {
    BOOL _bForCard;
    NSArray *_shareCardList;
    WCShareCardData *_curDisplayShareCard;
    UIView *_cardBgView;
    UIView *_coverView;
    UIView *_cardBgContainerView;
    NSString *_shareUsernameText;
}

+ (double)ShareCardGatherViewHeight;
+ (double)LocalCityShareCardEmptyTipsHeight;

- (void)layoutSubviews;
- (void)initViewForShareCard;
- (BOOL)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (id)genCardBgView;
- (id)genLogoView;
- (id)genTagListView;
- (id)genNewItemView;
- (id)genTagItemViewWithTagItem:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
