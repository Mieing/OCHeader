@class NSDictionary, NSString;

@interface WAShareAppMessageCommonParamsModel : NSObject

@property (copy, nonatomic) NSDictionary *WAShareAppMessageCommonParamsModel_OriginDictionary;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL disableForward;
@property (copy, nonatomic) NSDictionary *messageExtraData;
@property (nonatomic) BOOL useDefaultSnapshot;
@property (copy, nonatomic) NSString *webpageUrl;
@property (copy, nonatomic) NSString *to;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *thumbDataHash;
@property (nonatomic) unsigned int cardSubType;
@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *videoThumbPath;
@property (copy, nonatomic) NSString *videoMD5;
@property (copy, nonatomic) NSString *videoButtonText;
@property (copy, nonatomic) NSString *playDesc;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL hasRelievedBuyPlugin;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *defaultHintUrl;
@property (copy, nonatomic) NSString *tailLang;
@property (nonatomic) int appBrandPriority;
@property (copy, nonatomic) NSString *bizSourceName;
@property (copy, nonatomic) NSString *bizSourceIconUrl;
@property (copy, nonatomic) NSString *chatroomUsername;
@property (nonatomic) BOOL useForChatTool;
@property (copy, nonatomic) NSString *chatToolMode;
@property (copy, nonatomic) NSString *webViewUrl;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) BOOL sdk_isFromMenu;

+ (id)fromDictionary:(id)a0;

- (id)description;
- (id)toShareAppMessageContextModelWithWAContact:(id)a0 cardType:(int)a1 shouldUseUpdatableShare:(BOOL)a2 updatableShareTemplateId:(id)a3 isTodoMessage:(BOOL)a4 toDoActivityId:(id)a5 isPrivateMessage:(BOOL)a6 secFlagForSinglePageMode:(unsigned int)a7;
- (BOOL)needSignature;
- (void).cxx_destruct;

@end
