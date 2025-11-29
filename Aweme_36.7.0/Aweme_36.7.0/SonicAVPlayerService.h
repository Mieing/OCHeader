@class NSString;

@interface SonicAVPlayerService : NSObject <SonicPlayerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPlayerWithContext:(id)a0;

@end
