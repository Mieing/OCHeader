@class HTSLivePreviewPromotionSyncData_TickleUser, NSString, HTSLivePreviewPromotionSyncData_LuckyBag, HTSLiveImage, HTSLivePreviewPromotionSyncData_LuckyMoney, NSMutableArray, HTSLivePreviewPromotionSyncData_CjRp;

@interface HTSLivePreviewPromotionSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLivePreviewPromotionSyncData_LuckyBag *luckyBag;
@property (nonatomic) BOOL hasLuckyBag;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *featuredChatListArray;
@property (readonly, nonatomic) unsigned long long featuredChatListArray_Count;
@property (retain, nonatomic) HTSLivePreviewPromotionSyncData_LuckyMoney *luckyMoney;
@property (nonatomic) BOOL hasLuckyMoney;
@property (retain, nonatomic) HTSLivePreviewPromotionSyncData_CjRp *cjrp;
@property (nonatomic) BOOL hasCjrp;
@property (retain, nonatomic) NSMutableArray *commentTopicChatListArray;
@property (readonly, nonatomic) unsigned long long commentTopicChatListArray_Count;
@property (retain, nonatomic) HTSLivePreviewPromotionSyncData_TickleUser *tickleUser;
@property (nonatomic) BOOL hasTickleUser;

+ (id)descriptor;

@end
