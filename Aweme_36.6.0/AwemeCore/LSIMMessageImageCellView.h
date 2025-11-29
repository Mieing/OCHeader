@class UIImageView, UIView;
@protocol LSIMMessageImageCellVM;

@interface LSIMMessageImageCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) id<LSIMMessageImageCellVM> cellVM;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIImageView *pictureImageView;

- (void)configWithCellVM:(id)a0;
- (struct CGSize { double x0; double x1; })calcImageViewSize;
- (void)picutreImageViewDidTapped;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
