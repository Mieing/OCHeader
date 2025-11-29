@class NSString;

@interface ACCQuickStoryShareServiceFactoryImpl : HTSService <ACCQuickStoryShareServiceFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createQuickStoryShareService;


@end
