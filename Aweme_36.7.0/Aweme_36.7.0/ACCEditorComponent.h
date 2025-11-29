@class AWEVideoPublishViewModel;
@protocol IESServiceProvider, IESServiceRegister;

@interface ACCEditorComponent : NSObject

@property (readonly, nonatomic) id<IESServiceProvider, IESServiceRegister> serviceProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;

- (void)setupWithCompletion:(id /* block */)a0;
- (void)configEnvironmentIfNeed;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
