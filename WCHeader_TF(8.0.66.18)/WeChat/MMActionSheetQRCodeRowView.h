@class MMScrollableActionSheetVerticalRowInfo, NSString, UIImageView, GetQRCodeInfoLogic, MMWebImageView, UILabel, UIButton;
@protocol MMActionSheetQRCodeRowViewDelegate;

@interface MMActionSheetQRCodeRowView : MMUIView <GetQRCodeInfoLogicDelegate>

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) GetQRCodeInfoLogic *qrCodeInfoLogic;
@property (nonatomic) BOOL isUrlInfoHasUpdated;
@property (retain, nonatomic) NSString *codeStr;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) MMScrollableActionSheetVerticalRowInfo *rowInfo;
@property (weak, nonatomic) id<MMActionSheetQRCodeRowViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)rowViewHeight;

- (id)initWithCodeType:(unsigned int)a0 codeStr:(id)a1 title:(id)a2 getUrlInfoReqSession:(id)a3;
- (void)updateQRCodeInfoWithSession:(id)a0;
- (void)setupAllSubviews;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (void)getQRCodeInfoWithSession:(id)a0;
- (void)cancelQRCodeInfoCallback;
- (void)onTimeout:(id)a0;
- (void)updateRowInfoUseDefaultInfo:(unsigned int)a0;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)a0;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)a0 qrCodeInfoItem:(id)a1;
- (void).cxx_destruct;

@end
