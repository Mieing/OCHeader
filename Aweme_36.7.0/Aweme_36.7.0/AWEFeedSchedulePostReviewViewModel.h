@class NSString, UIImage, NSAttributedString;

@interface AWEFeedSchedulePostReviewViewModel : NSObject

@property (nonatomic) double bottomPadding;
@property (copy, nonatomic) NSString *sheetTitle;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *message;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) NSString *popupType;

- (void)updateTitleAndMessageWithAwemeModel:(id)a0;
- (double)sheetHeightWithWidth:(double)a0;
- (id)titleAttributedText:(id)a0;
- (id)messageAttributedText:(id)a0;
- (double)contentHeightWithWidth:(double)a0;
- (BOOL)isCancelButtonHidden;
- (BOOL)isConfirmButtonHidden;
- (void).cxx_destruct;

@end
