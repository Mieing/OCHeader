@interface WAAuthManagerBottomViewModel : NSObject

@property (nonatomic) double viewHeight;
@property (nonatomic) BOOL isEdit;
@property (copy, nonatomic) id /* block */ editButtonClickAction;

- (id)initWithViewHeight:(double)a0 isEdit:(BOOL)a1;
- (void).cxx_destruct;

@end
