@class UIColor, NSString, EcsKfTempleteMsgOrderInfo, EcsJumpInfo, NSDate;

@interface TemplateHeaderWrap : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSDate *pubTime;
@property (retain, nonatomic) NSString *first;
@property (retain, nonatomic) UIColor *firstColor;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hideTitleAndTime;
@property (nonatomic) BOOL showIconAndDisplayName;
@property (nonatomic) BOOL hideIconAndDisplayNameLine;
@property (nonatomic) BOOL showComplaintButton;
@property (retain, nonatomic) NSString *templateMsgId;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) BOOL objIsShowShortcutIcon;
@property (retain, nonatomic) NSString *objShortcutIconURL;
@property (retain, nonatomic) NSString *objH5Url;
@property (retain, nonatomic) NSString *objWeAppUserName;
@property (retain, nonatomic) NSString *objWeAppPath;
@property (nonatomic) unsigned int weappVersion;
@property (nonatomic) unsigned int weappState;
@property (nonatomic) BOOL hideTitle;
@property (nonatomic) BOOL hideTime;
@property (nonatomic) BOOL isIgnoreHideTitleAndTimeFlag;
@property (nonatomic) unsigned int paymsgStyle;
@property (nonatomic) unsigned long long header_jump_type;
@property (retain, nonatomic) NSString *display_name_desc;
@property (nonatomic) BOOL show_right_icon_and_desc_name;
@property (retain, nonatomic) NSString *right_icon_url;
@property (retain, nonatomic) NSString *right_desc_name;
@property (retain, nonatomic) NSString *finder_user_name;
@property (nonatomic) BOOL show_finder_feed_entry;
@property (retain, nonatomic) NSString *finder_feedid;
@property (retain, nonatomic) NSString *finder_nonceid;
@property (retain, nonatomic) NSString *finder_feed_thumnail;
@property (retain, nonatomic) NSString *transaction_id;
@property (nonatomic) BOOL show_header_background_img;
@property (retain, nonatomic) NSString *header_background_img_url;
@property (retain, nonatomic) NSString *header_background_img_url_darkmode;
@property (retain, nonatomic) NSString *header_background_color;
@property (retain, nonatomic) NSString *header_background_color_darkmode;
@property (retain, nonatomic) EcsKfTempleteMsgOrderInfo *ecsKfTempleteMsgOrderInfo;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

- (void).cxx_destruct;

@end
