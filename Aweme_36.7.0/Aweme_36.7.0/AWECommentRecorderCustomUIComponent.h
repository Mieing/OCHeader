@class UILabel, UIView;
@protocol ACCRecorderViewContainer;

@interface AWECommentRecorderCustomUIComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (id)repliedUserModel;
- (void)componentDidMount;
- (void).cxx_destruct;
- (id)displayedText;

@end
