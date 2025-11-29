@class NSString, NSMutableArray, NSMutableDictionary;

@interface BDUGLuckyDogSyncManager : NSObject <BDUGLuckyDogByteSyncProtocol>

@property (retain, nonatomic) NSMutableArray *syncDatas;
@property (retain, nonatomic) NSMutableDictionary *actionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)handleByteSyncMessageData:(id)a0 businessID:(long long)a1;
- (BOOL)canHandleBusinessID:(long long)a0;
- (BOOL)handleMessageDictionary:(id)a0;
- (void)registerSyncType:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)businessIDs;

@end
