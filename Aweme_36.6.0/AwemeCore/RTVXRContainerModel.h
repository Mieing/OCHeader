@class Protocol;
@protocol RTVXRBusinessModelProtocol, RTVXRBusinessContextProtocol;

@interface RTVXRContainerModel : NSObject

@property (readonly, nonatomic) id<RTVXRBusinessModelProtocol> businessModel;
@property (readonly, nonatomic) long long containerType;
@property (readonly, nonatomic) Protocol *controllerProtocol;
@property (readonly, nonatomic) id<RTVXRBusinessContextProtocol> businessContext;

- (id)initWithContainerType:(long long)a0 controllerProtocol:(id)a1 businessModel:(id)a2;
- (void).cxx_destruct;
- (void)updateContext:(id)a0;

@end
