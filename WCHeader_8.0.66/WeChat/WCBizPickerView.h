@class NSString, UIView, UIPickerView, UIViewController;
@protocol WCBizPickerViewDelegate;

@interface WCBizPickerView : NSObject <UIPopoverPresentationControllerDelegate> {
    UIPickerView *m_pickerView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *transparentView;
@property (retain, nonatomic) UIViewController *contentVC;
@property (nonatomic) long long lastOri;
@property (weak, nonatomic) id<WCBizPickerViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getPickerViewSize;

- (id)initWithDelegate:(id)a0;
- (void)removeAllPickerViewDelegate;
- (void)dealloc;
- (void)didRotate:(id)a0;
- (void)showInView:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setSelectedRow:(long long)a0 Component:(long long)a1;
- (void)reloadComponent:(long long)a0;
- (void)handleTap:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
