@class UIView;

@interface AWEImmersiveDetailCell : AWEAwemeDetailTableViewCell

@property (retain, nonatomic) UIView *fakeSeperator;
@property (nonatomic) double fakeSeperatorHeight;
@property (nonatomic) double cornerRadius;

- (Class)interactionControllerFactory;
- (void)replaceCurrentViewController:(id)a0;
- (void)refreshFakeSeperator;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)setParentVC:(id)a0;

@end
