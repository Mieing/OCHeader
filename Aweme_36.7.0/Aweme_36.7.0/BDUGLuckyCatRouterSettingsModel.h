@class NSArray, NSString;

@interface BDUGLuckyCatRouterSettingsModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSArray *dataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
