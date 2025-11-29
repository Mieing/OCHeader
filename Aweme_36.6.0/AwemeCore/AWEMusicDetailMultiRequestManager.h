@class NSNumber, NSMutableArray, AWEMusicDetailDataContext;

@interface AWEMusicDetailMultiRequestManager : NSObject

@property (weak, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (nonatomic) unsigned long long detailRequestStatus;
@property (nonatomic) unsigned long long inspirationRequestStatus;
@property (retain, nonatomic) NSNumber *inspirationCount;
@property (nonatomic) BOOL allRequestSuccess;
@property (retain, nonatomic) NSMutableArray *allRequestSuccessTaskBlockArray;

- (id)initWithDataContext:(id)a0;
- (void)updateDetailRequestStatus:(unsigned long long)a0;
- (void)addAllRequestSuccessTaskBlock:(id /* block */)a0;
- (void)updateInspirationRequestStatus:(unsigned long long)a0 inspirationCount:(id)a1;
- (void)onSomeRequestStatusDidChange;
- (void)judgeIsAllRequestSuccess;
- (void)onAllRequestDidSuccess;
- (void)executeAllRequestSuccessTask;
- (void)trackAllRequestSuccess;
- (void).cxx_destruct;

@end
