@class UIView;
@protocol VoiceContainerViewDelegate;

@interface VoiceContainerView : UIView {
    BOOL _bIsTouchesEnded;
}

@property (retain, nonatomic) UIView *animatedMaskView;
@property (weak, nonatomic) id<VoiceContainerViewDelegate> m_delegate;
@property (nonatomic) BOOL isLeft;
@property (nonatomic) BOOL isNeedLight;

- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)initMembers;
- (void).cxx_destruct;

@end
