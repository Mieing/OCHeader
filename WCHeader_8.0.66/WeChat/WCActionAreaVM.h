@class NSMutableArray, NSArray, WCDataItem, WCMomentsPageContext, WCActionAreaVMParams, OrderedDictionary;

@interface WCActionAreaVM : NSObject

@property (retain, nonatomic) WCActionAreaVMParams *params;
@property (nonatomic) BOOL enabledWrap;
@property (retain, nonatomic) NSArray *elementTypes;
@property (copy, nonatomic) NSArray *elementArr;
@property (retain, nonatomic) OrderedDictionary *layoutInfoMap;
@property (retain, nonatomic) NSMutableArray *elementsRowInfo;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isDynamicTagEnabled;
@property (nonatomic) BOOL isStarEnabled;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) unsigned long long totalLine;
@property (readonly, nonatomic) WCMomentsPageContext *pageContext;

+ (id)timeLabelDisplayTextWithDataItem:(id)a0 scene:(unsigned long long)a1;
+ (BOOL)canShowStarIconWithDataItem:(id)a0 scene:(unsigned long long)a1 isStarEnabled:(BOOL)a2;
+ (BOOL)isFromShakeWithDataItem:(id)a0;
+ (BOOL)canShowSourceWithDataItem:(id)a0 showType:(unsigned long long *)a1 text:(id *)a2 url:(id *)a3 backupUrl:(id *)a4 pageContext:(id)a5;
+ (BOOL)showsIndividualSourceWithDataItem:(id)a0 pageContext:(id)a1;
+ (BOOL)canShowLocationInfoWithDataItem:(id)a0 pageContext:(id)a1;
+ (BOOL)showsIndividualLocationWithDataItem:(id)a0 pageContext:(id)a1;
+ (BOOL)canShowWeAppInfoWithDataItem:(id)a0 pageContext:(id)a1;
+ (BOOL)showsIndividualAppInfoWithDataItem:(id)a0 pageContext:(id)a1;
+ (BOOL)canShowEcsViewWithDataItem:(id)a0;
+ (BOOL)canShowShareGroupButtonWithDataItem:(id)a0 isDynamicTagEnabled:(BOOL)a1;
+ (BOOL)canShowDeleteButtonWithDataItem:(id)a0;
+ (id)weAppLabelDisplayTextWithAppUsername:(id)a0;
+ (BOOL)shouldFetchWeAppContactWithAppUsername:(id)a0;

- (id)initWithDataItem:(id)a0 enabledWrap:(BOOL)a1 scene:(unsigned long long)a2 isDynamicTagEnabled:(BOOL)a3 isStarEnabled:(BOOL)a4 pageContext:(id)a5;
- (id)elementTypesAtRow:(unsigned long long)a0;
- (void)calculateLayoutInfoWithParams:(id)a0;
- (void)adjustElementsForOneLine;
- (void)adjustElementsForMultiLine;
- (BOOL)canDisplayForOneLine;
- (double)totalMinWidth;
- (void)setupActionAreaElements;
- (id)createElementWraps;
- (id)createElementsRowInfo;
- (void)prepareDisplayElements;
- (id)timeLabelDisplayText;
- (id)locationDisplayText;
- (BOOL)canShowStarIcon;
- (BOOL)canShowSource;
- (BOOL)canShowLoactionInfo;
- (unsigned long long)sourceShowType;
- (id)sourceText;
- (id)sourceUrl;
- (id)sourceBackupUrl;
- (BOOL)canShowWeAppInfo;
- (id)weAppLabelDisplayText;
- (BOOL)shouldFetchWeAppContact;
- (BOOL)canShowShareGroupButton;
- (BOOL)canShowDeleteButton;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)displayElementsHashString;
- (void).cxx_destruct;

@end
