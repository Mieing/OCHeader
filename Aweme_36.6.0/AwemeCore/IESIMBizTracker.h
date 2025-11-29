@class NSDictionary, NSArray;

@interface IESIMBizTracker : NSObject

@property (retain, nonatomic) NSDictionary *registerNecessaryKeyForEventMap;
@property (retain, nonatomic) NSArray *registerNecessaryEvents;
@property (retain, nonatomic) NSDictionary *registerieldBindConstraintsMap;

+ (void)trackEvent:(id)a0 bizParams:(id)a1 commonParams:(id)a2 bizCoversKeys:(id)a3;
+ (void)prepareRegister;
+ (void)trackEvent:(id)a0 bizParams:(id)a1 commonParams:(id)a2;
+ (id)sharedInstance;

- (void)setupParamsCheckTool;
- (void)trackEvent:(id)a0 bizParams:(id)a1 commonParams:(id)a2 bizCoversKeys:(id)a3;
- (id)analysisFieldsForEvent:(id)a0 bizParams:(id)a1 commonParams:(id)a2 bizCoversKeys:(id)a3;
- (void)checkCoversInfo:(id)a0 bizParams:(id)a1 commonParams:(id)a2 uploadParams:(id)a3 bizCoversKeys:(id)a4;
- (void)findMissingRequiredFields:(id)a0 forEvent:(id)a1 allFields:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
