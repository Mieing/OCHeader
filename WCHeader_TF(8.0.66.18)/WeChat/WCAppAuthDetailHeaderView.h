@class UIView, NSString, MMWebImageView, WCAppAuthAppMetaInfo, MMUILabel;

@interface WCAppAuthDetailHeaderView : UIView

@property (retain, nonatomic) WCAppAuthAppMetaInfo *appInfo;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isAppType;
@property (retain, nonatomic) MMWebImageView *appIconView;
@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) MMUILabel *appTypeLabel;
@property (retain, nonatomic) UIView *appTypeBgView;
@property (retain, nonatomic) MMUILabel *descLabel;

- (id)initWithAppInfo:(id)a0 desc:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
