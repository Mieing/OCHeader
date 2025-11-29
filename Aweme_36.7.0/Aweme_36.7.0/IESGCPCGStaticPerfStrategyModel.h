@class NSString, NSDictionary;

@interface IESGCPCGStaticPerfStrategyModel : NSObject

@property (nonatomic) double expectBitrate;
@property (nonatomic) double expectFPS;
@property (copy, nonatomic) NSString *expectResolution;
@property (copy, nonatomic) NSString *expectPodType;
@property (retain, nonatomic) NSDictionary *originalData;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;

@end
