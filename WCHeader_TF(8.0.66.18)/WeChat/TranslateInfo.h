@class NSString, NSData;

@interface TranslateInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int mesLocalId;
@property (nonatomic) unsigned long long msgServerId;
@property (nonatomic) unsigned long long msgCreateTime;
@property (retain, nonatomic) NSString *recoreItemlocalDataID;
@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) NSString *originLang;
@property (retain, nonatomic) NSString *translatedText;
@property (retain, nonatomic) NSString *translatedLang;
@property (nonatomic) BOOL bAutoScrollUp;
@property (nonatomic) BOOL showOriginTextNow;
@property (nonatomic) int autoScrollUpCount;
@property (nonatomic) int translateStatus;
@property (retain, nonatomic) NSString *displayTranslatedText;
@property (retain, nonatomic) NSString *brandWording;
@property (retain, nonatomic) NSString *snsID;
@property (nonatomic) BOOL bNeedShowAnimation;
@property (nonatomic) BOOL bNeedHideLoading;
@property (nonatomic) BOOL canReTrans;
@property (retain, nonatomic) NSData *cookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_originText;
+ (void)PBArrayAdd_originLang;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_translatedLang;
+ (void)PBArrayAdd_showOriginTextNow;
+ (void)PBArrayAdd_translateStatus;
+ (void)PBArrayAdd_brandWording;
+ (void)PBArrayAdd_snsID;
+ (void)PBArrayAdd_bNeedShowAnimation;
+ (void)PBArrayAdd_cookie;
+ (void)PBArrayAdd_canReTrans;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_recoreItemlocalDataID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)getDisplayContent;
- (BOOL)isTranslating;
- (BOOL)isTextTooLong;
- (BOOL)isTranslateFailed;
- (int)GetTranslateStatus;
- (BOOL)isMatchWithMsg:(id)a0;
- (void)setIdentifierParamsWithMsg:(id)a0;
- (void)setIdentifierParamsWithRecordItemData:(id)a0;
- (void).cxx_destruct;

@end
