@class ACCRecordViewControllerInputData, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCRecorderViewModel : NSObject

@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
