@class NSData, NSHashTable;

@interface AWESearchTabGuideByteSyncManager : NSObject

@property (retain, nonatomic) NSHashTable *listeners;
@property (nonatomic) BOOL isObservering;
@property (retain, nonatomic) NSData *cachedData;

+ (id)shareManager;

- (int)byteSyncBusinessID;
- (void)handleGuideData:(id)a0;
- (void)startObservering;
- (void)registerByteSync:(id)a0;
- (void)unregisterByteSync:(id)a0;
- (void)handleByteSyncCache:(id)a0;
- (void).cxx_destruct;

@end
