@class CJPayButton;

@interface CJPayStdKeyboardBtnConfig : NSObject

@property (retain, nonatomic) CJPayButton *button;
@property (nonatomic) long long horizontalStartIndex;
@property (nonatomic) long long horizontalLengthUnits;
@property (nonatomic) long long verticalStartIndex;
@property (nonatomic) long long verticalLengthUnits;

- (void).cxx_destruct;

@end
