@class NSString, NSDictionary;

@interface CKCamera : NSObject {
    void /* function */ presetAB;
    void /* function */ presetSet;
    void /* function */ presetRuntime;
    void /* function */ ratio;
    void /* function */ direction;
    void /* function */ shotRoute;
    void /* function */ recordBitrateJsonSet;
    void /* function */ downgradeReason;
    void /* function */ downgradeReasonInfo;
}

@property (nonatomic) struct CGSize { double x0; double x1; } ab;
@property (nonatomic) struct CGSize { double x0; double x1; } set;
@property (nonatomic) struct CGSize { double x0; double x1; } runtime;
@property (nonatomic, copy) NSString *presetAB;
@property (nonatomic, copy) NSString *presetSet;
@property (nonatomic, copy) NSString *presetRuntime;
@property (nonatomic) struct CGSize { double x0; double x1; } previewViewSize;
@property (nonatomic, copy) NSString *ratio;
@property (nonatomic, copy) NSString *direction;
@property (nonatomic) double zoom;
@property (nonatomic) unsigned long long photoQuality;
@property (nonatomic) long long flashMode;
@property (nonatomic) BOOL torchEnable;
@property (nonatomic, copy) NSString *shotRoute;
@property (nonatomic, copy) NSString *recordBitrateJsonSet;
@property (nonatomic, copy) NSString *downgradeReason;
@property (nonatomic, copy) NSDictionary *downgradeReasonInfo;

- (id)trackDict;
- (void).cxx_destruct;
- (id)init;

@end
