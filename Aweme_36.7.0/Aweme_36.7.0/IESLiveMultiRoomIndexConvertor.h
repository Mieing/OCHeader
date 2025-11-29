@class NSMutableDictionary, NSString, NSLock, IESLiveMultiRoomIndexItem;

@interface IESLiveMultiRoomIndexConvertor : NSObject <IESLiveMultiRoomIndexService> {
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (weak, nonatomic) IESLiveMultiRoomIndexItem *currentIndexItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)indexWithDIContext:(id)a0;
- (void)register:(id)a0 diContext:(id)a1 roomId:(id)a2 liveMainScene:(BOOL)a3;
- (void)clearWithDIContext:(id)a0;
- (id)diContextWithIndex:(id)a0;
- (id)getDiContextPossibleWithRoomId:(id)a0;
- (void)subscribe:(id)a0 changeRoomCallback:(id /* block */)a1 skip:(BOOL)a2;
- (BOOL)checkRecordWithRoomId:(id)a0 diContext:(id)a1 fixDeleteDIContext:(id)a2;
- (void)notifyChangeRoom:(id)a0;
- (id)itemWithSubscriber:(id)a0 needCreate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;

@end
