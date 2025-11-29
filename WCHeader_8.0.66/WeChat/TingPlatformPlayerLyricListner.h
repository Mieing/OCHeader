@class NSString;
@protocol TingFlowPlayerProtocol;

@interface TingPlatformPlayerLyricListner : NSObject <TingLyricDataServiceListener>

@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLyricTextChange:(id)a0 lyricItem:(id)a1;
- (void).cxx_destruct;

@end
