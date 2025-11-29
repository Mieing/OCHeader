@class UIButton, UILabel;

@interface IESIMLivePhotoTagView : UIControl

@property (retain, nonatomic) UIButton *livePhotoModeBtn;
@property (retain, nonatomic) UILabel *stateLabel;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) BOOL switchOn;

- (void)setLivePhotoStatusOn:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setUpUI;

@end
