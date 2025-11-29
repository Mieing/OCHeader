@class UIColor, NSString, NSArray, CContact, CContactVerifyLogic, NSAttributedString, NSMutableArray;

@interface BrandDetailNotificationCellViewModel : BrandNotificationCellViewModel <contactVerifyLogicDelegate> {
    NSMutableArray *m_messageTextArr;
    CContact *m_brandContact;
    CContactVerifyLogic *m_oLogic;
}

@property (readonly, nonatomic) NSString *headUrl;
@property (readonly, nonatomic) double headCornerRadius;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *userName;
@property (readonly, nonatomic) long long followStatus;
@property (copy, nonatomic) id /* block */ onFollowAction;
@property (readonly, nonatomic) NSArray *tagsList;
@property (readonly, nonatomic) NSAttributedString *attrTitle;
@property (readonly, nonatomic) long long maxTitleLines;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) NSAttributedString *attrDetail;
@property (readonly, nonatomic) long long maxDetailLines;
@property (readonly, nonatomic) double detailHeight;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSString *date;
@property (readonly, nonatomic) UIColor *dateColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateViewModelWithMsgWrap:(id)a0;

- (id)initWithMessage:(id)a0 viewWidth:(double)a1;
- (void)setMessageWrap:(id)a0;
- (void)setViewWidth:(double)a0;
- (id)cellViewClassName;
- (void)updateBrandContact;
- (double)viewHeight;
- (void)onDarkModeStatusChanged;
- (void)setFollowStatus:(long long)a0;
- (void)startFollow;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)a0;
- (void)resetFollowStatus:(BOOL)a0;
- (void)reloadData;
- (id)brandContact;
- (id)notifyMsg;
- (BOOL)showFollowButton;
- (BOOL)isNotFollow;
- (id)__attrStringByContentList:(id)a0;
- (void).cxx_destruct;

@end
