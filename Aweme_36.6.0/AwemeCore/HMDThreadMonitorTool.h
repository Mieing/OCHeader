@class NSArray;

@interface HMDThreadMonitorTool : NSObject

@property (retain, nonatomic) NSArray *businessList;

+ (id)preProcessAsyncThreadName:(id)a0;
+ (id)preProcessThreadName:(const char *)a0;
+ (id)getSpecialThreadLevel:(unsigned long long)a0;
+ (id)getInAppTimeLevel:(double)a0;
+ (id)shared;
+ (id)stringFromDictionary:(id)a0;

- (void)updateWithBussinessList:(id)a0;
- (id)getBussinessFromThreadName:(id)a0;
- (id)getAllThreadInfo;
- (void).cxx_destruct;
- (id)init;

@end
