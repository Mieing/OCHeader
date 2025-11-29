@class NSMutableArray;

@interface WCFinderLiveBaseBoxCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSMutableArray *boxIdList;

- (void)setRequest:(id)a0;
- (BOOL)hasChatRoomBox;
- (void)addBoxIdArr:(id)a0;
- (void)addBoxId:(id)a0;
- (void).cxx_destruct;

@end
