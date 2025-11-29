@class NSArray, NSString;

@interface AWEProfileMenuDoubleCheckViewControllerConfig : NSObject

@property (copy, nonatomic) NSArray *imageArray;
@property (copy, nonatomic) NSString *titleLabelText;
@property (copy, nonatomic) NSString *contentLabelText;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) id /* block */ resetSwitchBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void).cxx_destruct;

@end
