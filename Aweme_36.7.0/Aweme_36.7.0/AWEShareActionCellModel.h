@class NSString, AWEShareSaveAlertButtonModel;

@interface AWEShareActionCellModel : NSObject <AWEShareSaveViewModelProtocol>

@property (readonly, nonatomic) AWEShareSaveAlertButtonModel *buttonModel;
@property (readonly, nonatomic) double buttonHeight;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithButtonModel:(id)a0 buttonHeight:(double)a1 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void).cxx_destruct;

@end
