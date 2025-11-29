@class UIImage, NSString, NSAttributedString;

@interface AFDDualButtonAuthorizationPopupConfigModel : NSObject

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ leftBtnClickedBlock;
@property (copy, nonatomic) id /* block */ rightBtnClickedBlock;
@property (copy, nonatomic) id /* block */ closeBtnClickedBlock;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *titleLabelText;
@property (copy, nonatomic) NSString *contentLabelText;
@property (copy, nonatomic) NSString *leftBtnText;
@property (copy, nonatomic) NSString *rightBtnText;
@property (copy, nonatomic) NSAttributedString *attributedContentLabelText;
@property (nonatomic) BOOL allowsInteractiveDismissal;

- (void).cxx_destruct;

@end
