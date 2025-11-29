@class IESIMURLModel, UIColor;

@interface AWEIMChatCellDoubleAvatarPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) IESIMURLModel *firstImage;
@property (retain, nonatomic) IESIMURLModel *secondImage;
@property (copy, nonatomic) UIColor *bgColor;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end
