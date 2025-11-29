@class NSString;
@protocol DUXAlertDialogBodyView;

@interface AWEIMDUXAlertBodyContentWrapper : NSObject <DUXAlertDialogBodyView, IESIMAlertBodyContent>

@property (retain, nonatomic) id<DUXAlertDialogBodyView> duxAlertBodyContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxAlertDialog_view;
- (id)iesim_alertDialogView;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
