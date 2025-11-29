@class UIImageView, UILabel, UIView;

@interface AWEIMGroupOwnerMessagesListAudioCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIImageView *audioIndicateView;
@property (retain, nonatomic) UILabel *audioDurationLabel;
@property (retain, nonatomic) UILabel *contentLabel;

+ (id)identifier;

- (void)renderCustomizeContentWithVM:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
