@class NSString, NSAttributedString, UIImage;

@interface IESGCPXPlayGameAlertModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSAttributedString *descriptionAttributedText;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) long long actionStyle;
@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (id)initWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionStyle:(long long)a3 actionButtonTitle:(id)a4 cancelButtonTitle:(id)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (id)initWithTitle:(id)a0 attributedDescription:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end
