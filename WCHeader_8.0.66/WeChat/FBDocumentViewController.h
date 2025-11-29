@class UIButton, MMUILabel;

@interface FBDocumentViewController : MMUIViewController

@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *openButton;
@property (copy, nonatomic) id /* block */ onOpeniCloud;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)openiCloud;
- (void).cxx_destruct;

@end
