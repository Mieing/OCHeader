@class NLEInterface_OC, NSString, NSHashTable;
@protocol NLEMediaProtocol;

@interface NLEPlayerService_OC : NSObject <NLEPlayerServiceProtocol>

@property (retain, nonatomic) NSHashTable *playerStatusListeners;
@property (retain, nonatomic) id<NLEMediaProtocol> mediaWrapper;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (copy, nonatomic) id /* block */ mixPlayerCompleteBlock;
@property (nonatomic) BOOL hasPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMemory;
- (void)activeEditor:(id /* block */)a0;
- (id)playerStatusListenersArray;
- (BOOL)isInited;
- (BOOL)shouldPrepare;
- (void)addPlayerStatusListener:(id)a0;
- (void)removePlayerStatusListener:(id)a0;
- (void).cxx_destruct;

@end
