@class NSString, NSMutableArray;

@interface WCTimelineReceivedAdIdMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *receivedAdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mergeReceivedAdList:(id)a0;
- (void)deleteAdvertiseDateItemList:(id)a0;
- (BOOL)isAdReceived:(id)a0;
- (BOOL)isAdReceivedBySnsId:(id)a0;
- (void).cxx_destruct;

@end
