@class HTSEventContext, NSString, UIView, NSArray, NSDictionary, UIButton, IESLiveUrgeLiveApi, UILabel;

@interface IESLiveFinishAudienceUrgeLiveCard : NSObject <IESLiveUrgeGiftSendAction, IESLiveFinishAudiencePageDynamicData>

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *urgeLiveButton;
@property (nonatomic) double containerWidth;
@property (nonatomic) long long state;
@property (retain, nonatomic) IESLiveUrgeLiveApi *urgeLiveApi;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *urgeGiftPanelTitle;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (copy, nonatomic) NSString *topViewIdentifier;
@property (copy, nonatomic) NSArray *hideViewsIdentifier;
@property (nonatomic) BOOL ignoreBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id /* block */ onDestoryCallback;
@property (readonly, copy, nonatomic) id /* block */ onHideCallback;
@property (readonly, copy, nonatomic) id /* block */ onShowCallback;

- (void)didSetAttachingDIContext;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)urgeDonateSuccess;
- (id)initWithData:(id)a0 container:(id)a1;
- (id)urgeWithGiftSchema;
- (void)onClickAction:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
