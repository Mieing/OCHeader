@class NSDictionary, NSMutableDictionary;

@interface IESAlgorithmModelMappingHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *originModelNameMap;
@property (retain, nonatomic) NSMutableDictionary *mixModelNameMap;
@property (retain, nonatomic) NSDictionary *mixFromStringMap;
@property (retain, nonatomic) NSDictionary *mixToStringMap;

+ (id)defaultHandler;

- (void)buildMixStringMap;
- (BOOL)makeMappingWithOriginModelName:(id)a0;
- (BOOL)makeMappingWithMapModelName:(id)a0;
- (id)getMapModelNameWithModelName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
