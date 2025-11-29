@class NSMutableArray, NSString, NSArray, NSMutableDictionary, UIView, UIPickerView, UIViewController;
@protocol WCPayPickerViewDelegate;

@interface WCPayPickerView : NSObject <UIPopoverPresentationControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {
    int m_curSession;
    NSMutableArray *m_arrSessions;
    NSMutableArray *m_arrRows;
    double m_fLeftWidth;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *transparentView;
@property (retain, nonatomic) UIViewController *popoverControllerNew;
@property (nonatomic) long long lastOri;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *handlers;
@property (nonatomic) long long tag;
@property (retain, nonatomic) UIPickerView *m_pickerView;
@property (weak, nonatomic) id<WCPayPickerViewDelegate> m_delegate;
@property (retain, nonatomic) NSMutableDictionary *m_dicSelectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getPickerViewSize;

- (void)initView;
- (id)initWithRows:(id)a0;
- (id)initWithRows:(id)a0 title:(id)a1;
- (void)dealloc;
- (void)didRotate:(id)a0;
- (void)showInView:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)handleTap:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setLeftWidth:(double)a0;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setSelectedRow:(long long)a0 atSession:(long long)a1;
- (void)setSelectedRows:(id)a0;
- (void).cxx_destruct;

@end
