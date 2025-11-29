@class NSString, FWFWKUserScriptInjectionTimeEnumData;

@interface FWFWKUserScriptData : NSObject

@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) FWFWKUserScriptInjectionTimeEnumData *injectionTime;
@property (nonatomic) BOOL isMainFrameOnly;

+ (id)makeWithSource:(id)a0 injectionTime:(id)a1 isMainFrameOnly:(BOOL)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
