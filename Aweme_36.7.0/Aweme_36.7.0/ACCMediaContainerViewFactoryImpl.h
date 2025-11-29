@class NSString;

@interface ACCMediaContainerViewFactoryImpl : NSObject <ACCMediaContainerViewFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildSequenceMediaContainerViewWithWorkspace:(id)a0;
+ (id)buildMediaContainerViewWithPublishModel:(id)a0;
+ (id)buildImageEditMediaContainerViewWithPublishModel:(id)a0;


@end
