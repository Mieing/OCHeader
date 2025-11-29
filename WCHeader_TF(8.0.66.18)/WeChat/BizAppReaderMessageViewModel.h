@class BizAppReaderMessageBigPicViewModel, NSString, UIImage, NSMutableArray;

@interface BizAppReaderMessageViewModel : BizAppBaseMessageViewModel

@property (retain, nonatomic) NSMutableArray *bigPicTitleLabelStyles;
@property (readonly, nonatomic) BizAppReaderMessageBigPicViewModel *bigPicViewModel;
@property (readonly, nonatomic) NSString *thumbSquareUrl;
@property (readonly, nonatomic) NSString *thumbRectangleUrl;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) BOOL isNearbyNativeAppMsg;
@property (readonly, nonatomic) double sourceTopPadding;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (double)digestMaxWidth;
- (id)sourceDetailStr;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void)onSourceInfoUpdated;
- (id)bigPicViewStyle;
- (id)accessibilityMessageType;
- (void).cxx_destruct;

@end
