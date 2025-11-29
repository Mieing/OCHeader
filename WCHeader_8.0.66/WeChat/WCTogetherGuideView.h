@class UIImageView, MMUILabel;

@interface WCTogetherGuideView : MMHalfScreenGuideView

@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) MMUILabel *guideAlbumLabel;

- (id)init;
- (id)createCancelButton;
- (void)loadCustomizedContentView;
- (void)layoutCustomizedContentView;
- (void).cxx_destruct;

@end
