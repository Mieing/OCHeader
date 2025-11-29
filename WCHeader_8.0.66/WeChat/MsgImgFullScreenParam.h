@class MiniTaskTransitionContext, CMessageWrap, UIView, MsgImgDataLogic;
@protocol MsgImgFullScreenViewControllerDelegate;

@interface MsgImgFullScreenParam : NSObject

@property (retain, nonatomic) CMessageWrap *currentMsg;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL soundable;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) BOOL bNeedEdit;
@property (nonatomic) BOOL isShowSingleMsg;
@property (nonatomic) unsigned long long eScene;
@property (nonatomic) unsigned long long transitioningStyle;
@property (retain, nonatomic) id<MsgImgFullScreenViewControllerDelegate> delegate;
@property (retain, nonatomic) MsgImgDataLogic *msgImgDataLogic;
@property (nonatomic) unsigned long long subScene;
@property (nonatomic) unsigned long long m_eType;
@property (nonatomic) BOOL bIsEditMode;
@property (copy, nonatomic) id /* block */ customBottomLeftString;
@property (copy, nonatomic) id /* block */ customBottomLeftActioin;
@property (retain, nonatomic) MiniTaskTransitionContext *minimizeTranstionContext;

- (id)init;
- (void).cxx_destruct;

@end
