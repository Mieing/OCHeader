@class IESLiveInteractSubtitleConfig, UILabel;

@interface IESLiveInteractSubtitleCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *textLabel;

- (void)initViews;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
