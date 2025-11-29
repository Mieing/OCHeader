@class NSString, NSMutableArray;

@interface StatusClusterPresent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSMutableArray *iconActions;
@property (nonatomic) unsigned int characterSetType;
@property (retain, nonatomic) NSString *clusterId;
@property (retain, nonatomic) NSString *clusterPresentType;
@property (nonatomic) unsigned int clusterPresentVersion;

+ (void)initialize;

- (void)setClusterPresentVersion:(unsigned int)a0;
- (unsigned int)clusterPresentVersion;
- (void)setClusterPresentType:(id)a0;
- (id)clusterPresentType;
- (void)setClusterId:(id)a0;
- (id)clusterId;
- (void)setCharacterSetType:(unsigned int)a0;
- (unsigned int)characterSetType;
- (void)setIconActions:(id)a0;
- (id)iconActions;
- (void)setIconId:(id)a0;
- (id)iconId;

@end
