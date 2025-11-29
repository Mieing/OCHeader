@class WCCameraFilterViewReportObj, WCCameraBeautyViewReportObj;

@interface WCCameraProModeViewReportObj : NSObject

@property (nonatomic) unsigned long long beautyState;
@property (retain, nonatomic) WCCameraBeautyViewReportObj *beautySubReportObj;
@property (nonatomic) unsigned long long filterState;
@property (retain, nonatomic) WCCameraFilterViewReportObj *filterSubReportObj;
@property (nonatomic) unsigned long long gridState;
@property (nonatomic) unsigned long long timeState;
@property (nonatomic) unsigned long long aspectRatioState;

+ (unsigned long long)optionWithEventID:(id)a0;

- (void)updateProModeViewState:(unsigned long long)a0 withType:(unsigned long long)a1;
- (void)updateProModeViewState:(unsigned long long)a0 withType:(unsigned long long)a1 subType:(unsigned long long)a2;
- (id)genReportStrWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
