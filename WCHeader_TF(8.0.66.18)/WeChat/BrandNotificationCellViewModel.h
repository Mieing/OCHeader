@class UIColor, NSString, CContact, NSMutableArray;

@interface BrandNotificationCellViewModel : BrandNotificationBaseCellViewModel

@property (retain, nonatomic) CContact *brandContact;
@property (retain, nonatomic) NSMutableArray *messageLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } messageLabelSize;
@property (retain, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSMutableArray *contactLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } contactLabelSize;
@property (nonatomic) double viewHeight;
@property (readonly, nonatomic) double viewWidth;
@property (readonly, nonatomic) NSString *contactLabelStr;
@property (readonly, nonatomic) UIColor *contactLabelColor;

+ (BOOL)canCreateViewModelWithMsgWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessage:(id)a0 viewWidth:(double)a1;
- (void)updateBrandContact;
- (double)labelMaxWidth;
- (id)textForMsgLabelWithSender:(id)a0 messageWrap:(id)a1;
- (id)headerImgUrl;
- (void).cxx_destruct;

@end
