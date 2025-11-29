@class NSString, NSMutableArray, NSMutableDictionary;

@interface EmoticonFinderDesignerDataCenter : NSObject <AffEmoticonDesignerListDataExt>

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSMutableArray *storeItemList;
@property (retain, nonatomic) NSMutableArray *emojiInfoList;
@property (retain, nonatomic) NSMutableArray *ipSetList;
@property (retain, nonatomic) NSMutableDictionary *hasMoreStatusDict;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL needStaticsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDesignerUin:(unsigned int)a0;
- (void)dealloc;
- (BOOL)didFinishFirstFetch;
- (BOOL)hasCache;
- (void)loadCache;
- (void)startFirstFetch;
- (unsigned long long)totalEmoticonCount;
- (unsigned long long)totalEmojiCount;
- (void)fetchEmoticonDataFotType:(unsigned long long)a0 andUsingOldReqBuf:(BOOL)a1;
- (void)setDataFromHomePage:(id)a0;
- (BOOL)hasMoreStatusForType:(unsigned long long)a0;
- (void)onGotTotalEmoticonCount:(int)a0 emojiCount:(int)a1;
- (void)onFirstFetchFinished;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonFinishedForType:(int)a0 hasMore:(BOOL)a1;
- (void)onFetchEmoticonDataFailedForType:(int)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;

@end
