@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCExternalBussinessTemplate : NSObject <ACCBusinessTemplate>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
