@class AWEMiniLunaExitKeyAction;

@interface AWEMiniLunaExitDataHelper : NSObject

@property (nonatomic) double enterTs;
@property (retain, nonatomic) AWEMiniLunaExitKeyAction *lastAction;

+ (id)shared;

- (void)recordAction:(id)a0;
- (void)recordEnterMiniLuna;
- (void)reportWithCustomParams:(id)a0;
- (BOOL)actionIsValid:(id)a0;
- (void).cxx_destruct;

@end
