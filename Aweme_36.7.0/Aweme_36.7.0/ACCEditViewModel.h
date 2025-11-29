@class AWEVideoPublishViewModel, ACCEditViewControllerInputData;
@protocol IESServiceProvider;

@interface ACCEditViewModel : NSObject

@property (readonly, nonatomic) ACCEditViewControllerInputData *inputData;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
