@interface WCCameraFilterViewReportObj : NSObject

@property (nonatomic) unsigned long long filterOriginal;
@property (nonatomic) unsigned long long filterNatural;
@property (nonatomic) unsigned long long filterWhiteSkin;
@property (nonatomic) unsigned long long filterVitality;
@property (nonatomic) unsigned long long filterMatte;
@property (nonatomic) unsigned long long filterClear;
@property (nonatomic) unsigned long long filterSunset;
@property (nonatomic) unsigned long long filterProfound;
@property (nonatomic) unsigned long long filterAutumn;
@property (nonatomic) unsigned long long filterDeliciousFood;
@property (nonatomic) unsigned long long filterBlues;
@property (nonatomic) unsigned long long filterMax;

- (void)updateProModeViewState:(unsigned long long)a0 withType:(unsigned long long)a1;
- (id)genReportDictWithType:(unsigned long long)a0;

@end
