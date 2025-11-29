@class NSString, NSArray;

@interface IESLivePipelineConfig : NSObject

@property (readonly, nonatomic) NSString *stage;
@property (readonly, nonatomic) NSArray *stepConfigs;

- (id)initWithStageName:(id)a0 stepConfigs:(id)a1;
- (void).cxx_destruct;

@end
