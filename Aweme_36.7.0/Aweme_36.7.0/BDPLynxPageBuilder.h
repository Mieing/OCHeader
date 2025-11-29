@class NSString, NSData, UIView, BDPUniqueID;
@protocol AnnieXContainerBaseProtocol, BDXViewContainerServiceProtocol;

@interface BDPLynxPageBuilder : NSObject {
    id<BDXViewContainerServiceProtocol> _containerService;
}

@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (readonly, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *view;
@property (retain, nonatomic) NSData *configData;
@property (nonatomic) BOOL useCache;
@property (copy, nonatomic) NSString *groupName;

- (void)requestAppConfigWithAnnieXCardModel:(id)a0;
- (id)generateMiniAppRegistryFromOrgin:(id)a0;
- (id)_annieView:(id)a0;
- (id)initWithService:(id)a0 lynxSchema:(id)a1 uniqueID:(id)a2 groupName:(id)a3;
- (id)view:(BOOL)a0 bgRuntime:(id)a1;
- (void).cxx_destruct;

@end
