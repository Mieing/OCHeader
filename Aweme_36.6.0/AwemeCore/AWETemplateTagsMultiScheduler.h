@class NSArray, AWETemplateTagsContext;

@interface AWETemplateTagsMultiScheduler : NSObject

@property (retain, nonatomic) NSArray *candidates;
@property (weak, nonatomic) AWETemplateTagsContext *context;
@property (retain, nonatomic) NSArray *displayStrategies;

+ (id)strategyClassMap;

- (void)setupDisplayStrategies;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)updateWithContext:(id)a0;

@end
