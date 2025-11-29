@class NSString;
@protocol IESLiveMultiLinkerProvider, IESLiveRevenueInteractProvider, IESLivePKProvider;

@interface IESLiveRevenueInteractLynxModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> interactProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
