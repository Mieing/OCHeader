@class FinderColumnInfo, NSString, FinderNpsSurveyInfo, FinderObject, NSData;

@interface FinderObjectPlaceHolderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *showWording;
@property (nonatomic) int errcode;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *actionWording;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSString *bypassInfo;
@property (retain, nonatomic) NSString *continueWording;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) NSData *placeHolderBuffer;
@property (nonatomic) unsigned int needRefreshDestTabtype;
@property (retain, nonatomic) FinderNpsSurveyInfo *npsSurveyInfo;
@property (retain, nonatomic) FinderColumnInfo *columnInfo;
@property (retain, nonatomic) NSString *containerId;

+ (void)initialize;

- (void)setContainerId:(id)a0;
- (id)containerId;
- (void)setColumnInfo:(id)a0;
- (id)columnInfo;
- (void)setNpsSurveyInfo:(id)a0;
- (id)npsSurveyInfo;
- (void)setNeedRefreshDestTabtype:(unsigned int)a0;
- (unsigned int)needRefreshDestTabtype;
- (void)setPlaceHolderBuffer:(id)a0;
- (id)placeHolderBuffer;
- (void)setObject:(id)a0;
- (id)object;
- (void)setContinueWording:(id)a0;
- (id)continueWording;
- (void)setBypassInfo:(id)a0;
- (id)bypassInfo;
- (void)setTabType:(unsigned int)a0;
- (unsigned int)tabType;
- (void)setActionWording:(id)a0;
- (id)actionWording;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;
- (void)setErrcode:(int)a0;
- (int)errcode;
- (void)setShowWording:(id)a0;
- (id)showWording;
- (id)playableContentVM;

@end
