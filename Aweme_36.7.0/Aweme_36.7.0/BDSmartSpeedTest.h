@class NSString;

@interface BDSmartSpeedTest : NSObject

@property (copy, nonatomic) NSString *intelligentModelURL;
@property (nonatomic) BOOL isServiceValid;

- (void)configServer:(id)a0;
- (float)predictSpeedSync:(id)a0;
- (id)getIntelligentInput:(id)a0;
- (float)parseIntelligentInputFloat:(id)a0 withKey:(id)a1 withOptimizedFlag:(int)a2;
- (id)parseIntelligentInputString:(id)a0 withKey:(id)a1 withOptimizedFlag:(int)a2;
- (void).cxx_destruct;

@end
