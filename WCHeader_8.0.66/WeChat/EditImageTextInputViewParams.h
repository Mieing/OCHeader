@class NSString, UIColor, NSArray;

@interface EditImageTextInputViewParams : NSObject

@property (copy, nonatomic) NSString *defaultText;
@property (retain, nonatomic) UIColor *defaultColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editViewFrame;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *confirmBtnColor;
@property (nonatomic) long long textViewAlignment;
@property (retain, nonatomic) NSArray *styleOrders;
@property (nonatomic) BOOL canChangeLine;
@property (nonatomic) BOOL useEmotionColor;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long maxNumberOfFullWidthCharactersPerLayoutLine;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) BOOL shouldShowSecondCutPromotionEntry;

- (id)init;
- (void).cxx_destruct;

@end
