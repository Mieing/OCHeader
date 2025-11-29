@class NSArray, LMTContainerInfoModel, LMTNodeModel;

@interface LMTPageStructureModel : NSObject

@property (retain, nonatomic) LMTNodeModel *footer;
@property (retain, nonatomic) NSArray *body;
@property (retain, nonatomic) LMTContainerInfoModel *container_info;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
