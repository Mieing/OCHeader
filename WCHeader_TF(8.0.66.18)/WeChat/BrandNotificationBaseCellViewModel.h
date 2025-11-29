@class CMessageWrap;

@interface BrandNotificationBaseCellViewModel : NSObject

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) BOOL hasBottomLine;
@property (nonatomic) double viewWidth;

+ (BOOL)canCreateViewModelWithMsgWrap:(id)a0;
+ (id)createModelWithMsgWrap:(id)a0 viewWidth:(double)a1;

- (id)cellViewClassName;
- (id)initWithMessage:(id)a0 viewWidth:(double)a1;
- (double)viewHeight;
- (double)contentLeftMargin;
- (double)detailContentLeftMargin;
- (double)contentTopMargin;
- (double)messageLabelTopMargin;
- (double)timeLabelTopMargin;
- (void).cxx_destruct;

@end
