@class NSNumber;
@protocol Optional;

@interface MYVoipLocalConfigation : JSONModel

@property (nonatomic) BOOL defaultCameraPositionBack;
@property (nonatomic) BOOL disableConfirmForQuickEntrance;
@property (retain, nonatomic) NSNumber<Optional> *entranceMaxCountValue;
@property (retain, nonatomic) NSNumber<Optional> *hadShowlistCallEntranceGuide;
@property (retain, nonatomic) NSNumber<Optional> *hadShowInteractionStickerGuide;
@property (retain, nonatomic) NSNumber<Optional> *hadShowSwitchTargetGuide;
@property (retain, nonatomic) NSNumber<Optional> *hadResolveMissCallsHistory;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void)updateHadShowInteractionStickerGuide:(BOOL)a0;
- (void)updateDefaultCameraPosition:(BOOL)a0;
- (void)updateDisableConfirmForQuickEntrance:(BOOL)a0;
- (void)updateEntranceMaxCount:(long long)a0;
- (void)updateHadShowListCallEntranceGuide:(BOOL)a0;
- (void)updateHadShowSwitchTargetGuide:(BOOL)a0;
- (void)updateHadResolveMissCallsHistory:(BOOL)a0;
- (void).cxx_destruct;

@end
