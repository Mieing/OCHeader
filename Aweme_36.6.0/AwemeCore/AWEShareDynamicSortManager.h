@class NSString, NSMutableDictionary;

@interface AWEShareDynamicSortManager : NSObject <AWEShareMessage, AWEShareDynamicSortManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *channelSortOperations;
@property (retain, nonatomic) NSMutableDictionary *actionSortOperations;
@property (retain, nonatomic) NSMutableDictionary *allSortOperations;
@property (retain, nonatomic) NSMutableDictionary *sortChannelPriority;
@property (retain, nonatomic) NSMutableDictionary *sortActionPriority;
@property (retain, nonatomic) NSMutableDictionary *sortAllPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)updateShareType:(id)a0 withSortStrategy:(id)a1 inChannel:(BOOL)a2;
- (void)updateShareType:(id)a0 withSortOperation:(id)a1 sortStyle:(long long)a2;
- (void)didConfigureShareView:(id)a0 withContext:(id)a1;
- (void)sortChannels:(id)a0 usingSorting:(id)a1;
- (void)p_sortChannel:(id)a0 channelTypes:(id)a1 actionTypes:(id)a2;
- (void)p_sortShareTypes:(id)a0 sortStyle:(long long)a1;
- (void)insert:(id)a0 atIndex:(long long)a1 shareTypes:(id)a2;
- (void)insert:(id)a0 before:(id)a1 shareTypes:(id)a2;
- (void)insert:(id)a0 after:(id)a1 shareTypes:(id)a2;
- (void)swap:(id)a0 with:(long long)a1 shareTypes:(id)a2;
- (void)minInsert:(id)a0 atIndex:(long long)a1 shareTypes:(id)a2;
- (void)cleanOldSortMessage;
- (void)sortChannels:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
