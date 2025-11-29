@class NSMutableDictionary;

@interface IESECGoodsDetailSectionObjectMappingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataModelMapping;
@property (retain, nonatomic) NSMutableDictionary *metaModelMapping;
@property (retain, nonatomic) NSMutableDictionary *viewModelMapping;

+ (id)sharedManager;

- (void)registerSectionViewModel;
- (void)registerViewDataModel;
- (void).cxx_destruct;
- (id)init;

@end
