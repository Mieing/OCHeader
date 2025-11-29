@class NSString, NSAttributedString, NSDictionary;

@interface AWEECOMIMNoticeModel : NSObject

@property (copy, nonatomic) NSString *leftIconURLString;
@property (copy, nonatomic) NSString *leftIconName;
@property (copy, nonatomic) NSString *rightBtnTitle;
@property (copy, nonatomic) NSString *rightIconURLString;
@property (copy, nonatomic) NSString *targetURLString;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long hotSpotType;
@property (nonatomic) unsigned long long queuedCount;
@property (nonatomic) BOOL showCloseBtn;
@property (copy, nonatomic) NSAttributedString *attTitle;
@property (nonatomic) BOOL showRightButton;
@property (nonatomic) BOOL isTitleAccessibilityBtn;
@property (copy, nonatomic) id /* block */ rightButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeFinishBlock;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;

+ (id)noticeModelForNetworkNotReachable;
+ (id)noticeModelForOpenPush;
+ (id)textColorWithNoticeType:(long long)a0;
+ (id)textColorMapper;
+ (id)noticeModelWithType:(long long)a0 attTitle:(id)a1;
+ (double)attTitleFontSize;
+ (id)noticeModelForNetworkNotReachableWithNoticeStr:(id)a0;
+ (id)noticeModelFromQueuedCountModel:(id)a0;
+ (id)iconNameWithWithNoticeType:(long long)a0;
+ (id)linkColor;

- (void).cxx_destruct;
- (id)init;

@end
