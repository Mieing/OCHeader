@class NSString, AWEVideoPublishViewModel;

@interface AWEStudioComposerCreationDataSetterImpl : NSObject <AWEStudioComposerCreationDataSetter>

@property (retain, nonatomic) AWEVideoPublishViewModel *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableSocialTextEditMode;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
