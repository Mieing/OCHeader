@class NSString;

@interface MMFinderLivePkTaskedBonusTerminalState : NSObject <MMFinderLivePkTaskedBonusStateDescriptor>

@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) Class backgroundViewClass;
@property (readonly, nonatomic) Class contentViewClass;
@property (readonly, nonatomic) BOOL enableGiftingForAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)projectedNextStateClassForModel:(id)a0;

@end
