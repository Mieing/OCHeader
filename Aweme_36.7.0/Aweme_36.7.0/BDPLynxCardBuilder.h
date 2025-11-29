@class NSString, BDPLynxCardModel, UIView, BDPUniqueID, NSData;
@protocol AnnieXContainerBaseProtocol, BDXViewContainerServiceProtocol;

@interface BDPLynxCardBuilder : NSObject {
    id<BDXViewContainerServiceProtocol> _containerService;
}

@property (copy, nonatomic) BDPLynxCardModel *model;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *view;
@property (retain, nonatomic) NSData *configData;
@property (nonatomic) BOOL useCache;

- (id)generateMiniAppRegistryFromOrgin:(id)a0;
- (id)_annieView:(id)a0;
- (id)initWithService:(id)a0 model:(id)a1 lynxSchema:(id)a2 uniqueID:(id)a3;
- (id)view:(BOOL)a0 isLoadScript:(BOOL)a1 bgRuntime:(id)a2;
- (void).cxx_destruct;

@end
