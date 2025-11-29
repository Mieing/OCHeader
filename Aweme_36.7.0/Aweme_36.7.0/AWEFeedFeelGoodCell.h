@class UIViewController;
@protocol AWEFeelGoodCellViewControllerProtocol;

@interface AWEFeedFeelGoodCell : AWEFeedViewCell {
    UIViewController<AWEFeelGoodCellViewControllerProtocol> *_feelGoodViewController;
}

- (void)setFeelGoodViewController:(id)a0;
- (id)feelGoodViewController;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)reset;
- (void)awakeFromNib;
- (void)willDisplay;

@end
