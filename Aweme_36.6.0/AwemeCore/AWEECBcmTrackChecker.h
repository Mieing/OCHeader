@class NSArray;

@interface AWEECBcmTrackChecker : NSObject

@property (class, readonly) AWEECBcmTrackChecker *shared;

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *bstGroupTypeCheckEvents;
@property (copy, nonatomic) NSArray *bstFormInfoCheckEvents;
@property (copy, nonatomic) NSArray *btmCheckEvents;

- (void)checkBtmWithEvent:(id)a0 params:(id)a1;
- (void)checkEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
