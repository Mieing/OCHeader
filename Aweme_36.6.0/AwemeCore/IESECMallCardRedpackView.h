@class UIImageView, UILabel, NSString;

@interface IESECMallCardRedpackView : UIView

@property (retain, nonatomic) UIImageView *redpackImageView;
@property (retain, nonatomic) UILabel *redpackText;
@property (nonatomic) BOOL mallLiveCardOptimizeRedpack;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;

- (void)viewWillDisplay;
- (void)viewDidEndDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
