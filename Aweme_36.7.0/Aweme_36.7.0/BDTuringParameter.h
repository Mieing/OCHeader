@class NSDictionary, NSMutableDictionary, NSString;

@interface BDTuringParameter : NSObject

@property (copy) NSDictionary *parameter;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSMutableDictionary *creators;
@property (copy, nonatomic) NSString *appID;

+ (id)sharedInstance;

- (void)updateCurrentParameter:(id)a0;
- (id)modelWithParameter:(id)a0;
- (void)addCreator:(Class)a0;
- (id)currentParameter;
- (void).cxx_destruct;
- (id)init;

@end
