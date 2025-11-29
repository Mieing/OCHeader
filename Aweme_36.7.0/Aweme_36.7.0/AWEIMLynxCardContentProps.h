@class NSNumber, NSString, AWEEnterpriseIMMessageCardBaseViewModel;

@interface AWEIMLynxCardContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSNumber *enterpriseLynxEngineType;
@property (nonatomic) BOOL shouldInactiveEnterpriseInstantMessageCard;
@property (nonatomic) BOOL shouldShowCoverView;
@property (nonatomic) struct CGSize { double width; double height; } initialLynxViewSize;
@property (copy, nonatomic) NSString *messageID;
@property (retain, nonatomic) AWEEnterpriseIMMessageCardBaseViewModel *enterpriseViewModel;
@property (copy, nonatomic) id /* block */ didUpdateCellContentSizeBlock;
@property (copy, nonatomic) id /* block */ didFinishLynxLoadBlock;
@property (copy, nonatomic) id /* block */ didRegisterLynxContextBlock;
@property (copy, nonatomic) id /* block */ didTapHookGestureViewBlock;
@property (copy, nonatomic) id /* block */ didTriggerHitTestBlock;

- (void).cxx_destruct;

@end
