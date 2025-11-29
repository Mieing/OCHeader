@class NSString;

@interface WCLabsCommonInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int uiShowLabTipCnt;
@property (nonatomic) BOOL hasShowNewRedDotInLabEntrance;
@property (nonatomic) BOOL shouldShowGerneralRedDotInLabEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiShowLabTipCnt;
+ (void)PBArrayAdd_hasShowNewRedDotInLabEntrance;
+ (void)PBArrayAdd_shouldShowGerneralRedDotInLabEntrance;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
