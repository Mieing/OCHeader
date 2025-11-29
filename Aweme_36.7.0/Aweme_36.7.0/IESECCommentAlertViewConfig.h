@class NSString;

@interface IESECCommentAlertViewConfig : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ showAction;

- (void).cxx_destruct;

@end
