@class UIImage, NSString;

@interface AWEIMMangoShareBizCellConfiguration : NSObject

@property (copy, nonatomic) UIImage *internalIconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)initWithIconImage:(id)a0 title:(id)a1 buttonTitle:(id)a2 tapAction:(id /* block */)a3;
- (void).cxx_destruct;

@end
