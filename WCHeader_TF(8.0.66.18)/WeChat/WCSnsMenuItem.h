@class NSString;

@interface WCSnsMenuItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int menuActionType;
@property (retain, nonatomic) NSString *alertWording;
@property (nonatomic) unsigned int alertActionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_menuActionType;
+ (void)PBArrayAdd_alertWording;
+ (void)PBArrayAdd_alertActionType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isValidForShow;
- (void).cxx_destruct;

@end
