@class NSArray, NSString;

@interface IESLiveGiftOHRSortServiceIMP : IESLiveGeneralBaseService <IESLiveGiftOHRSortService>

@property (copy, nonatomic) NSArray *pageTypes;
@property (nonatomic) long long sortType;
@property (nonatomic) BOOL enableOHRService;
@property (nonatomic) long long rowMaxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (id)sortGiftListWithOriginalList:(id)a0 pageType:(unsigned long long)a1;
- (id)translationElementsWithArray:(id)a0;
- (id)mirrorElementsWithArray:(id)a0;
- (BOOL)checkSweepIndexOfGift:(id)a0 targetIndexOfGift:(id)a1;
- (void).cxx_destruct;

@end
