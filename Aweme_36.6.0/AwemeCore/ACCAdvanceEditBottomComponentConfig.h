@class DVEVCContext, NSDictionary;
@protocol ACCAEMenuConfigProtocol;

@interface ACCAdvanceEditBottomComponentConfig : NSObject

@property (weak, nonatomic) id<ACCAEMenuConfigProtocol> menuConfig;
@property (weak, nonatomic) DVEVCContext *context;
@property (retain, nonatomic) NSDictionary *configsDic;

- (id)identifierWithComponentType:(id)a0;
- (id)identifierWithComponentType:(id)a0 subType:(id)a1;
- (id)identifierWithComponentType:(id)a0 subType:(id)a1 grandType:(id)a2;
- (id)initWithMenuConfig:(id)a0 context:(id)a1;
- (id)subComponentConfig;
- (id)componentModelConfigsDic;
- (id)identifierWithComponentType:(id)a0 parent:(id)a1;
- (id)rootComponent;
- (void).cxx_destruct;

@end
