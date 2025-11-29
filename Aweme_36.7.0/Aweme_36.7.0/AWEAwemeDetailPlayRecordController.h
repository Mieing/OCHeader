@class NSString, NSMutableSet;

@interface AWEAwemeDetailPlayRecordController : AWEAwemeNewDetailBaseController <AWEFeedPlayRecordInfoProtocol>

@property (retain, nonatomic) NSMutableSet *playModels;
@property (nonatomic) long long scrollEndMaxCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)maxUserScorllIndex;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (long long)currentPlayVideoCount;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
