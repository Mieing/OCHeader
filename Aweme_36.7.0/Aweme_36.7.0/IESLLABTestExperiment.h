@class NSString, NSArray;

@interface IESLLABTestExperiment : NSObject

@property (copy, nonatomic) NSString *experimentKey;
@property (nonatomic) BOOL isBind2User;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) unsigned long long valueType;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) BOOL autoExpose;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSArray *authors;

+ (id)getExperimentValueForKey:(id)a0 withExposure:(BOOL)a1 defaultValue:(id)a2;

- (id)getValueWithForceExposure:(BOOL)a0 defaultValue:(id)a1;
- (id)initExperimentWithKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2 isBind2User:(BOOL)a3 isSticky:(BOOL)a4;
- (id)experimentValue;
- (void)editValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
