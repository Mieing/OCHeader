@class MMUILabel, NSString, MMPageSheetBaseView, WCAdURLImageView;

@interface WCAdHalfScreenContainerNativeView : WCAdHalfScreenContainerBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMPageSheetBaseView *sheetView;
@property (retain, nonatomic) WCAdURLImageView *head;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) MMUILabel *desc;
@property (retain, nonatomic) MMUILabel *tips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerInfo:(id)a0;
- (void)initSubview;
- (void)initCommonUI;
- (void)initContainerUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
