@class UIColor, NSString, NSAttributedString;

@interface AWERelationListDescLabelModel : NSObject

@property (nonatomic) BOOL show;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSAttributedString *attributedDescText;

- (void).cxx_destruct;

@end
