@class NSString, NSMutableAttributedString, UIColor;

@interface CJPayStateShowModel : NSObject

@property (copy, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSMutableAttributedString *titleAttributedStr;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) double imgDurationTime;
@property (retain, nonatomic) UIColor *iconBackgroundColor;

- (void).cxx_destruct;

@end
