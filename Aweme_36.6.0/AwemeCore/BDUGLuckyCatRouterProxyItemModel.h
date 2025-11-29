@class NSString, NSArray;

@interface BDUGLuckyCatRouterProxyItemModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *sceneKey;
@property (copy, nonatomic) NSArray *timeTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
