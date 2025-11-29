@class UIView;
@protocol DUXAlertDialogBodyView;

@interface DUXAlertDialogBodyWrapper : NSObject

@property (retain, nonatomic) id<DUXAlertDialogBodyView> body;
@property (retain, nonatomic) UIView *bodyView;

+ (id)wrapperWithContent:(id)a0 config:(id)a1;

- (void).cxx_destruct;

@end
