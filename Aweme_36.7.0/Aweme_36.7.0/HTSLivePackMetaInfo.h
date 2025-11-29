@class NSString, NSMutableDictionary;

@interface HTSLivePackMetaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *env;
@property (copy, nonatomic) NSString *dc;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *cluster;
@property (retain, nonatomic) NSMutableDictionary *extras;
@property (readonly, nonatomic) unsigned long long extras_Count;

+ (id)descriptor;

- (id)cluster;
- (id)dc;
- (id)env;
- (id)scene;
- (void)setCluster:(id)a0;
- (void)setDc:(id)a0;
- (void)setEnv:(id)a0;
- (void)setScene:(id)a0;
- (id)extras;

@end
