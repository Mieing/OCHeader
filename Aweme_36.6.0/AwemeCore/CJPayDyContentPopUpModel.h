@class NSString, UIColor, UIView;

@interface CJPayDyContentPopUpModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topRightBtnTitle;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *mainOperation;
@property (retain, nonatomic) UIColor *mainOperationColor;
@property (copy, nonatomic) id /* block */ didClickMainOperationBlock;
@property (copy, nonatomic) id /* block */ didClickRightTopOperationBlock;

+ (id)buildImageViewWithURL:(id)a0 andTitle:(id)a1;

- (void).cxx_destruct;

@end
