@class NSString, WCAdHalfScreenContainerInfo;
@protocol WCAdHalfScreenContainerViewDelegate;

@interface WCAdHalfScreenContainerBaseView : NSObject <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdHalfScreenContainerInfo *containerInfo;
@property (weak, nonatomic) id<WCAdHalfScreenContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerInfo:(id)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (id)genUILabelWithType:(int)a0;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
