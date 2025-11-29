@class NSArray;

@interface SECNetPipeline : NSObject

@property (copy, nonatomic) NSArray *detectors;
@property (copy, nonatomic) NSArray *protectors;

+ (id)protect:(id)a0;
+ (id)tryDetect:(id)a0;
+ (void)setupWithDetectors:(id)a0 andProtectors:(id)a1;
+ (id)regroupProtectActions:(id)a0;
+ (id)shared;

- (void)setupWithDetectors:(id)a0 andProtectors:(id)a1;
- (void).cxx_destruct;

@end
