@class NSObject;
@protocol AWEAwemeLongPressFunctionModelParamsProtocol;

@interface AWEAwemeLongPressFunctionModelBuilder : NSObject

@property (retain, nonatomic) id model;
@property (retain, nonatomic) NSObject<AWEAwemeLongPressFunctionModelParamsProtocol> *params;
@property (copy, nonatomic) id /* block */ customBuildBlock;

- (id)initWithModel:(id)a0 params:(id)a1 customBuildBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)build;

@end
