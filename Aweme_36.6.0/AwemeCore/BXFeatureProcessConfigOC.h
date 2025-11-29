@class NSString, NSDictionary, NSArray, BXEventWindowOC;

@interface BXFeatureProcessConfigOC : NSObject {
    struct shared_ptr<bytebench::BXFeatureProcessConfig> { struct BXFeatureProcessConfig *__ptr_; struct __shared_weak_count *__cntrl_; } config;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *componentName;
@property (retain, nonatomic) BXEventWindowOC *eventWindow;
@property (copy, nonatomic) NSDictionary *sessionWindow;
@property (copy, nonatomic) NSArray *eventSource;
@property (nonatomic) unsigned long long processTime;
@property (copy, nonatomic) id /* block */ filterFunction;
@property (copy, nonatomic) id /* block */ numberAggregationFunction;
@property (copy, nonatomic) id /* block */ stringAggregationFunction;

- (id)initWithKey:(id)a0 type:(unsigned long long)a1;
- (void)useDefaultFunction:(unsigned long long)a0;
- (void)registerConfig;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
