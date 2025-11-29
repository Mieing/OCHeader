@class NSData, NSString;

@interface FinderLiveBattleSpecificGiftNumIndicator : WXPBGeneratedMessage <MMFinderLivePkWinningConditionArguments>

@property (readonly, nonatomic) NSData *serializedArguments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *giftId;

+ (void)initialize;

- (BOOL)areArgumentsEqualTo:(id)a0;

@end
