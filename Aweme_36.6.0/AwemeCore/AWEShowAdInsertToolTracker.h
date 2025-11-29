@class NSString;

@interface AWEShowAdInsertToolTracker : NSObject

@property (copy, nonatomic) id /* block */ seriesExtraParams;
@property (copy, nonatomic) NSString *adScene;

- (BOOL)enablePlayletInspireEnable;
- (BOOL)enableContinueInspireEnable;
- (void)publicAdTrackerWithName:(id)a0 customParams:(id)a1;
- (void)publicAdTrackerWithName:(id)a0 adModel:(id)a1 customParams:(id)a2;
- (void).cxx_destruct;

@end
