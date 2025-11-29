@class IESECMallPopupConfig, NSString, UIView, IESECMallPopupTask;
@protocol IESECMallPopupDelegate;

@interface IESECMallPopupTaskBaseView : UIView

@property (nonatomic) long long zIndex;
@property (retain, nonatomic) IESECMallPopupConfig *popupConfig;
@property (retain, nonatomic) IESECMallPopupTask *popupTask;
@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<IESECMallPopupDelegate> delegate;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) id /* block */ dismissCallback;

- (id)currentListContextIdForCards;
- (id)initWithPopupConfig:(id)a0 delegate:(id)a1 uniqueId:(id)a2;
- (void)showInView:(id)a0 zIndex:(long long)a1;
- (void)showInWindowWithZIndex:(long long)a0;
- (void)viewDidAppear;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidDisappear;

@end
