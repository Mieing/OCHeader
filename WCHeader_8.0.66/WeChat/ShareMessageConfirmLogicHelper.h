@class NSString, NSDictionary, NSData, CMessageWrap, ShareConfirmView;
@protocol ShareMessageConfirmLogicHelperDelegate;

@interface ShareMessageConfirmLogicHelper : MMObject <ShareConfirmViewDelegate> {
    ShareConfirmView *_confirmView;
    unsigned int _scene;
    BOOL _isShowTextView;
    unsigned int _style;
    BOOL _hasBeenHidden;
}

@property (weak, nonatomic) id<ShareMessageConfirmLogicHelperDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (nonatomic) BOOL isAddMessage;
@property (nonatomic) BOOL isAddTextMessage;
@property (nonatomic) BOOL isShowSendSuccessView;
@property (retain, nonatomic) NSDictionary *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessageWrap:(id)a0 isShowTextView:(BOOL)a1 andAppScene:(unsigned int)a2;
- (void)dealloc;
- (void)setConfirmViewStyle:(unsigned long long)a0;
- (void)showConfirmViewWithInputText:(id)a0 showText:(id)a1;
- (void)showConfirmViewWithInputText:(id)a0;
- (void)showConfirmView;
- (void)hideConfirmView;
- (void)rotateToCurrentOrietation;
- (void)rotateToOrientaion:(long long)a0;
- (void)OnSend:(id)a0;
- (void)OnCancel:(id)a0;
- (void)OnError:(id)a0;
- (void)OnBackToApp:(id)a0;
- (void)OnStayAtWeChat:(id)a0;
- (void).cxx_destruct;

@end
