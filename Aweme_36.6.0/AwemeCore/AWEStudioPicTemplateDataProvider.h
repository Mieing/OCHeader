@class NSString;

@interface AWEStudioPicTemplateDataProvider : HTSService <AWEStudioPicTemplateDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchPanelCategoriesWithRepository:(id)a0 dataContext:(id)a1 completion:(id /* block */)a2;
+ (id)buildConfigWithType:(unsigned long long)a0 ShootWay:(id)a1 shootEnterFrom:(id)a2;


@end
