@class NSCountedSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BDUGSecurePasteboardProtocol, BDUGSecurePasteDialogViewDelegate;

@interface BDUGSecureManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long realReadCount;
@property (retain, nonatomic) NSMutableDictionary *bizConfigs;
@property (retain, nonatomic) NSMutableDictionary *consumeDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pasteboardQueue;
@property (retain, nonatomic) NSCountedSet *notificationCountedSet;
@property (copy, nonatomic) NSString *aid;
@property (weak, nonatomic) id<BDUGSecurePasteboardProtocol> pasteboardDelegate;
@property (weak, nonatomic) id<BDUGSecurePasteDialogViewDelegate> dialogViewDelegate;
@property (nonatomic) long long pasteboardDialogType;
@property (nonatomic) BOOL disableReadPasteBoard;

+ (id)shareInstance;

- (void)syncPasteboardReadCount;
- (void)registerPasteboard:(id)a0;
- (void)unregisterPasteboardForKey:(id)a0;
- (void)saveConsumeRecord;
- (void)recognizePasteboardWithDetectPatternsEnable:(BOOL)a0 key:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)readPasteBoardWithScene:(id)a0 info:(id)a1 completion:(id /* block */)a2;
- (void)cleanPasteboard;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
