@class NSString, AWEVideoPublishViewModel;
@protocol ACCResourceLoadedService;

@interface ACCRecordPicTemplateComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCResourceLoadedService> resourceLoadService;
@property (weak, nonatomic) AWEVideoPublishViewModel *picTemplatePublishModel;
@property (nonatomic) BOOL hasAddDefaultPicTemplateProp;
@property (retain, nonatomic) NSString *picTemplateIdSync;

- (void)componentDidAppear;
- (void)componentDidMount;
- (void)startPixelPicTemplate;
- (void)addDefaultPicTemplateProp;
- (void).cxx_destruct;

@end
