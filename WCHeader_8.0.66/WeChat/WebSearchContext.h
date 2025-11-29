@class NSString, TagCtrlInfo, NSMutableDictionary;

@interface WebSearchContext : NSObject <NSCopying>

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *thirdExtParam;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isFromVoice;
@property (copy, nonatomic) NSString *extParams;
@property (nonatomic) BOOL isHomePage;
@property (copy, nonatomic) NSString *recommendSearchQuery;
@property (copy, nonatomic) NSString *cachePageResult;
@property (copy, nonatomic) NSString *toViewType;
@property (nonatomic) unsigned long long searchEditState;
@property (nonatomic) BOOL isSubSearch;
@property (nonatomic) BOOL isFromDiscoverSearch;
@property (nonatomic) BOOL forbidNavCancelButton;
@property (nonatomic) BOOL forceShowNavCancelButton;
@property (nonatomic) BOOL forbidNavBackButton;
@property (nonatomic) BOOL enableRestoreEducatePage;
@property (nonatomic) unsigned long long searchBarType;
@property (nonatomic) BOOL enableParallelRequest;
@property (nonatomic) BOOL enableParallelSearchGuideRequest;
@property (nonatomic) BOOL isImageSearch;
@property (copy, nonatomic) NSString *reqkey;
@property (copy, nonatomic) NSString *cacheImageSrc;
@property (nonatomic) long long cursorIndex;
@property (retain, nonatomic) TagCtrlInfo *tagCtrlInfo;
@property (nonatomic) unsigned int mpSubscene;
@property (nonatomic) BOOL forbidLiteapp;
@property (nonatomic) double delayShowTimeForWebviewDidFinishLoad;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableDictionary *customNavBarParams;
@property (nonatomic) BOOL isFromFinder;
@property (copy, nonatomic) NSString *starBizKey;
@property (copy, nonatomic) NSString *multiContentBizKey;
@property (nonatomic) BOOL isHalfScreen;

- (long long)mmSearchGetParentTypeFromScene:(long long)a0;
- (id)initContextWithParallelRequest:(id)a0;
- (id)init;
- (void)urlParamsSelfComplement;
- (BOOL)isEmoticonSearchController;
- (BOOL)isChatSearch;
- (BOOL)isImageSearchScene;
- (BOOL)isFromTopicSearch;
- (void)updateSessionId;
- (id)searchPlaceHolder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
