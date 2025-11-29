@class NSString, UIImageView, UITextField, UIView;

@interface AWESearchScanCircleEditView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *searchBackgroundView;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UITextField *searchTextField;
@property (weak, nonatomic) UIView *blackBlurBackgroundView;
@property (copy, nonatomic) id /* block */ searchWithQueryHandler;
@property (copy, nonatomic) id /* block */ clickSearchTextFiledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableAIDouYinNewFrameWorkScanCircleSearch;

- (void)tapBackgroundView;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)changeWhiteMode:(BOOL)a0;
- (void)configUIWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidChangeSelection:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;

@end
