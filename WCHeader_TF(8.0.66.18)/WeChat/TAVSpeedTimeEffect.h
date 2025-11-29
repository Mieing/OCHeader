@class NSString;

@interface TAVSpeedTimeEffect : NSObject <TAVTimeRangeTimeEffectProtocol>

@property (nonatomic) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyTimeEffectToClips:(id)a0;

@end
