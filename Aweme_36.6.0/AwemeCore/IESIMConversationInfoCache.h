@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMConversationInfoCache : NSObject <IESIMLoginManagerMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rwLock;
@property (retain, nonatomic) NSMutableDictionary *memoryConvSortTimeCahce;
@property (nonatomic) long long currentSDKUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)markMemoryConvSortTimeForKey:(id)a0 cellSortTime:(double)a1;
- (double)memoryCellSortTimeWithKey:(id)a0;
- (void)resetShowEmptyConvForKey:(id)a0;
- (void)markShowEmptyConv:(BOOL)a0 forKey:(id)a1;
- (BOOL)showEmptyMarkForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
