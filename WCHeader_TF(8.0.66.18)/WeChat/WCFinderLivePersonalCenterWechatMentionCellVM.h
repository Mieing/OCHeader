@class NSString, WCFinderMention, WCFinderAuthInfo, WCFinderContact;
@protocol WCFinderLivePersonalCenterWechatMentionCellVMDelegate;

@interface WCFinderLivePersonalCenterWechatMentionCellVM : NSObject

@property (retain, nonatomic) WCFinderMention *mention;
@property (copy, nonatomic) NSString *accessibilityString;
@property (nonatomic) BOOL showFollowButton;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (readonly, copy, nonatomic) NSString *headURL;
@property (readonly, copy, nonatomic) NSString *thumbURL;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *timeString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *objectTid;
@property (readonly, nonatomic) BOOL isAuthor;
@property (readonly, nonatomic) BOOL isFinder;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) unsigned long long mentionID;
@property (readonly, copy, nonatomic) NSString *feedText;
@property (readonly, copy, nonatomic) NSString *nonceID;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) WCFinderContact *contact;
@property (readonly, copy, nonatomic) NSString *suffixTitle;
@property (retain, nonatomic) WCFinderAuthInfo *authInfo;
@property (nonatomic) long long uniType;
@property (weak, nonatomic) id<WCFinderLivePersonalCenterWechatMentionCellVMDelegate> delegate;

- (id)initWithMention:(id)a0 cacheContainerWidth:(double)a1;
- (double)cellHeightWithWidth:(double)a0;
- (id)displayContentForMention:(id)a0 originContent:(id)a1;
- (id)titleModel;
- (id)getMentionTitleWithMention:(id)a0 authInfo:(out id *)a1;
- (id)ensureAuthInfo:(id)a0;
- (id)getDisplayNameWithUsername:(id)a0 nickName:(id)a1;
- (unsigned long long)thankTypeForReport;
- (unsigned long long)thankStyleForReport;
- (BOOL)followButtonShouldShow;
- (void).cxx_destruct;

@end
