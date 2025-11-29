@class IESLiveMultiRoomPreloadParam;

@interface IESLiveMultiRoomPreloadBasePlugin : NSObject

@property (retain, nonatomic) IESLiveMultiRoomPreloadParam *preloadParam;
@property (nonatomic) unsigned long long state;

- (id)initWithParam:(id)a0;
- (void)tempStaging;
- (BOOL)loadedAndNotUsed;
- (void).cxx_destruct;
- (void)pause;
- (void)clear;
- (void)resume;

@end
