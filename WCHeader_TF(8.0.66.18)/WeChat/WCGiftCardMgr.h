@class WCCardCDNDownloadHelper, NSMutableDictionary, NSString;

@interface WCGiftCardMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *successDic;
@property (retain, nonatomic) NSMutableDictionary *failureDic;
@property (retain, nonatomic) WCCardCDNDownloadHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceLocalPath;
+ (id)sourceTempPath;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (void)dealloc;
- (void)preAcceptGiftCardWithBizUin:(unsigned int)a0 orderId:(id)a1 chatroomName:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)acceptGiftCardWithBizUin:(unsigned int)a0 orderId:(id)a1 chatroomName:(id)a2 doNotAccept:(BOOL)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
- (void)getGiftCardWithBizUin:(unsigned int)a0 orderId:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)cancelAllGiftCardCgi;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)getVideoByUrl:(id)a0 aesKey:(id)a1 length:(unsigned int)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)getPicbyUrl:(id)a0 aeskey:(id)a1 length:(unsigned int)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)uploadKVByType:(long long)a0 orderId:(id)a1 BizUin:(unsigned int)a2 giftUserName:(id)a3;
- (id)giftFilePathByFileName:(id)a0;
- (id)giftFileTempPathByFileName:(id)a0;
- (id)handlePreAccept:(id)a0;
- (id)handleAccept:(id)a0;
- (id)handleGiftCard:(id)a0;
- (void).cxx_destruct;

@end
