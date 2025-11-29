@class NSString, NSAttributedString, UIView;

@interface AWEInAppMessageConfig : NSObject

@property (nonatomic) BOOL showDividingLine;
@property (nonatomic) BOOL showBottomLine;
@property (retain, nonatomic) UIView *descView;
@property (nonatomic) long long actionStyle;
@property (retain, nonatomic) UIView *actionView;
@property (copy, nonatomic) NSString *actionStr;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *descStr;
@property (copy, nonatomic) NSAttributedString *attributedDesc;

- (void).cxx_destruct;

@end
