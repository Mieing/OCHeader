@class UIColor, NSString, UIFont, UIImage, NSArray, NSNumber, AFDSnackBarRightView;

@interface AFDSnackBarCustomViewContext : NSObject

@property (retain, nonatomic) NSString *content;
@property (copy, nonatomic) id /* block */ actionBtnBlock;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImage *leftIconImage;
@property (nonatomic) struct CGSize { double width; double height; } leftImageSize;
@property (retain, nonatomic) NSString *actionBtnTitle;
@property (retain, nonatomic) UIImage *actionBtnImage;
@property (retain, nonatomic) NSString *actionBtnImageURL;
@property (retain, nonatomic) UIColor *actionBtnTitleColor;
@property (retain, nonatomic) UIFont *actionBtnTitleFont;
@property (retain, nonatomic) NSArray *avatarsArray;
@property (retain, nonatomic) NSNumber *leftIconImageLeftPadding;
@property (retain, nonatomic) NSNumber *leftIconImageRightPadding;
@property (nonatomic) BOOL actionBtnImageOnRight;
@property (retain, nonatomic) NSNumber *actionBtnImageTitlePadding;
@property (retain, nonatomic) NSNumber *actionBtnImageRightPadding;
@property (retain, nonatomic) NSNumber *titleNumberOfLines;
@property (retain, nonatomic) AFDSnackBarRightView *rightView;
@property (nonatomic) double snackBarHeight;
@property (retain, nonatomic) UIColor *leftIconImageTintColor;

- (void).cxx_destruct;
- (id)init;

@end
