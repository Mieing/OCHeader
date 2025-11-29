@class UIColor, NSString, UIFont, NSAttributedString;

@interface CJPayDyTextPopUpModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (retain, nonatomic) NSString *topImageURL;
@property (nonatomic) BOOL isCountdownEnabled;
@property (nonatomic) long long countdown;
@property (retain, nonatomic) UIColor *countdownColor;
@property (copy, nonatomic) NSString *contentSuperLink;
@property (nonatomic) unsigned long long contentAlignment;
@property (copy, nonatomic) NSString *mainOperation;
@property (retain, nonatomic) UIColor *secondOperationColor;
@property (copy, nonatomic) NSString *secondOperation;
@property (copy, nonatomic) NSString *thirdOperation;
@property (retain, nonatomic) UIColor *mainOperationColor;
@property (retain, nonatomic) UIFont *mainOperationFont;
@property (retain, nonatomic) UIFont *secondOperationFont;
@property (copy, nonatomic) id /* block */ didClickMainOperationBlock;
@property (copy, nonatomic) id /* block */ didClickSecondOperationBlock;
@property (copy, nonatomic) id /* block */ didClickThirdOperationBlock;
@property (copy, nonatomic) id /* block */ didClickSuperLinkOperationBlock;
@property (readonly, nonatomic) BOOL isContentValid;

- (void).cxx_destruct;
- (id)init;

@end
