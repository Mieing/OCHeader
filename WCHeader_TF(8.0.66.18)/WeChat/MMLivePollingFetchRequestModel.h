@class NSData, NSArray, MMFinderLiveTaskId;

@interface MMLivePollingFetchRequestModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSArray *reqBufferArray;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1;
- (void).cxx_destruct;

@end
