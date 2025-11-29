@class WCFinderRedDotThreadSafeSet, NSString, WCFinderRedDotThreadSafeDictionary;

@interface WCFinderPhotoLoadTracker : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCFinderRedDotThreadSafeDictionary *trackingDataDict;
@property (retain, nonatomic) WCFinderRedDotThreadSafeSet *exposeFeedSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportPhotoWhiteScreenDuration:(double)a0 mediaInfo:(id)a1 contentVM:(id)a2 firstExpose:(BOOL)a3 useType:(long long)a4;

- (void)onServiceInit;
- (void)markPhotoReady:(id)a0 contentVM:(id)a1;
- (void)markPhotoExpose:(id)a0 contentVM:(id)a1 isReady:(BOOL)a2 useType:(long long)a3;
- (void)markPhotoEndExpose:(id)a0 contentVM:(id)a1 isReady:(BOOL)a2;
- (void).cxx_destruct;

@end
