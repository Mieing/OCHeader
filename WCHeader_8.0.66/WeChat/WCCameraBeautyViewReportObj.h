@interface WCCameraBeautyViewReportObj : NSObject

@property (nonatomic) unsigned long long beautyNone;
@property (nonatomic) unsigned long long beautyLow;
@property (nonatomic) unsigned long long beautyMiddle;
@property (nonatomic) unsigned long long beautyHigh;

- (void)updateProModeViewState:(unsigned long long)a0 withType:(unsigned long long)a1;
- (id)genReportDictWithType:(unsigned long long)a0;

@end
