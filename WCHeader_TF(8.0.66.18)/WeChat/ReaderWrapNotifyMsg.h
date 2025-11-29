@class NSString, NSArray, MMReaderPubliserInfo, NSNumber;

@interface ReaderWrapNotifyMsg : NSObject <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *title2;
@property (retain, nonatomic) NSArray *arrText;
@property (nonatomic) unsigned long long clickType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *weappUsername;
@property (retain, nonatomic) NSString *weappPath;
@property (nonatomic) unsigned int weappVersion;
@property (nonatomic) unsigned int weappState;
@property (retain, nonatomic) NSString *publisherUsername;
@property (retain, nonatomic) NSString *publisherNickname;
@property (nonatomic) unsigned int scene;
@property (nonatomic) double space;
@property (retain, nonatomic) NSString *boxDigest;
@property (nonatomic) BOOL isShowMsgCount;
@property (retain, nonatomic) NSArray *digestItems;
@property (nonatomic) unsigned char mergeType;
@property (retain, nonatomic) NSArray *mergeItems;
@property (retain, nonatomic) NSString *avatarUrl;
@property (nonatomic) unsigned int msgVersion;
@property (retain, nonatomic) NSString *notifyMsgId;
@property (retain, nonatomic) MMReaderPubliserInfo *publisherInfo;
@property (nonatomic) unsigned int msgShowFlag;
@property (nonatomic) unsigned int msgBusiType;
@property (retain, nonatomic) NSString *timeColorLight;
@property (retain, nonatomic) NSString *timeColorDark;
@property (nonatomic) unsigned int notifyMsgItemShowType;
@property (retain, nonatomic) NSNumber *isFold;
@property (retain, nonatomic) NSNumber *needHideRedCount;
@property (retain, nonatomic) NSString *mpArticleKey;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (BOOL)isDataValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)weAppOpWrap;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)genAttrBoxDigest:(id)a0;
- (BOOL)isMerge;
- (long long)genMergeCount;
- (void).cxx_destruct;

@end
