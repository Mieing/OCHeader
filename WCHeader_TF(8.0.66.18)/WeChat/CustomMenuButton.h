@class NSString, MpEcsJumpInfo, MMWebImageView;

@interface CustomMenuButton : UIButton

@property (retain, nonatomic) NSString *m_btnId;
@property (retain, nonatomic) NSString *m_btnKey;
@property (retain, nonatomic) NSString *m_btnName;
@property (retain, nonatomic) NSString *m_btnValue;
@property (retain, nonatomic) NSString *m_btnNativeUrl;
@property (nonatomic) long long m_btnType;
@property (nonatomic) long long m_btnActionType;
@property (nonatomic) long long m_btnIndex;
@property (nonatomic) unsigned long long showIconType;
@property (retain, nonatomic) MMWebImageView *leftIconImageView;
@property (nonatomic) BOOL isForPayRelatedSession;
@property (nonatomic) BOOL isSubMenu;
@property (nonatomic) BOOL isSubMenuListHasIcon;
@property (retain, nonatomic) MpEcsJumpInfo *menuEcsJumpInfo;

+ (int)serverType2LocalCustom:(long long)a0;
+ (long long)localCustomActionType2ServerType:(long long)a0;
+ (int)serverActionType2LocalCustomType:(long long)a0;
+ (id)getScanJsonContentFromScanType:(id)a0 scanResult:(id)a1 rawData:(id)a2;
+ (id)getPicsJsonContentFromPicMd5List:(id)a0;
+ (id)getPOIJsonContentFromSelectPOIInfo:(id)a0;

- (id)init;
- (void)layoutSubviews;
- (void)setLeftIcon:(id)a0;
- (void)setLeftIconUrl:(id)a0;
- (void).cxx_destruct;

@end
