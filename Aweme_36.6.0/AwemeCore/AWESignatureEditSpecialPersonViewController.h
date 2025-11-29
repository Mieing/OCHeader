@class NSArray;

@interface AWESignatureEditSpecialPersonViewController : UIViewController

@property (retain, nonatomic) NSArray *labelDataSourceArray;
@property (nonatomic) double startX;
@property (nonatomic) double startY;

- (void)configSpecialPersonViewWith:(id)a0 btnClickBlock:(id /* block */)a1;
- (double)labelViewHeight;
- (id)createButtonWithLabelName:(id)a0;
- (void)addLabelButtonToView:(id)a0;
- (void).cxx_destruct;

@end
