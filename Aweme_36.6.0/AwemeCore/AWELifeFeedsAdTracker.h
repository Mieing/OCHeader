@class NSString;

@interface AWELifeFeedsAdTracker : NSObject <AWELifeFeedsAdTrackAbility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtraFromAdData:(id)a0;
- (id)creativeIdFromAdData:(id)a0;
- (id)adIdFromAdData:(id)a0;
- (void)trackAdWithLabel:(id)a0 adData:(id)a1 duration:(long long)a2 extraParam:(id)a3;
- (void)trackAdClickWithRefer:(id)a0 label:(id)a1 adData:(id)a2 extraParam:(id)a3;
- (void)trackAdThirdIsShow:(BOOL)a0 adData:(id)a1;

@end
