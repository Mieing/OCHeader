@class NSMutableArray;

@interface MMLiveHapticsPattern : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *dynamicParametersStorage;
@property (retain, nonatomic) NSMutableArray *parameterCurvesStorage;
@property (readonly, nonatomic) NSMutableArray *dynamicParameters;
@property (readonly, nonatomic) NSMutableArray *parameterCurves;

- (id)init;
- (id)initWithEvents:(id)a0;
- (id)coreHapticsPattern;
- (void).cxx_destruct;

@end
