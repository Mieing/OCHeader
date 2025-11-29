@class NSString, UIColor;

@interface CJPayDyPayHPVoucherTagConfigModel : NSObject

@property (copy, nonatomic) NSString *leftImageName;
@property (nonatomic) struct CGSize { double width; double height; } leftImageSize;
@property (copy, nonatomic) NSString *leftLabelText;
@property (copy, nonatomic) NSString *rightLabelText;
@property (retain, nonatomic) UIColor *tagBorderColor;
@property (retain, nonatomic) UIColor *tagBcgColor;
@property (retain, nonatomic) UIColor *separateBcgColor;
@property (retain, nonatomic) UIColor *rightMsgColor;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
