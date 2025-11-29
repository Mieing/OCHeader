@class NSString, AWEAwemeModel;
@protocol IESServiceRegister, AWEPostPageContext, IESServiceProvider;

@interface AWEPostPagePreUpdatePublishModelHandler : NSObject <AWEPostPagePreUpdatePublishModelService>

@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (readonly, nonatomic) AWEAwemeModel *reeditAweme;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)updatePublishViewModel:(id)a0 reeditAweme:(id)a1 reeditAnchorInfo:(id)a2;
- (void).cxx_destruct;

@end
