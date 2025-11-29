@class NSMutableDictionary;

@interface LynxKeyframeParsedData : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyframeValues;
@property (retain, nonatomic) NSMutableDictionary *keyframeTimes;
@property (retain, nonatomic) NSMutableDictionary *beginStyles;
@property (retain, nonatomic) NSMutableDictionary *endStyles;
@property (nonatomic) BOOL isPercentTransform;

- (void).cxx_destruct;
- (id)init;

@end
