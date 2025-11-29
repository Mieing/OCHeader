@class NSString;
@protocol IESLLAlertDialogBodyView;

@interface IESLLAlertDialogBodyView : NSObject <DUXAlertDialogBodyView>

@property (retain, nonatomic) id<IESLLAlertDialogBodyView> body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxAlertDialog_view;
- (void).cxx_destruct;

@end
