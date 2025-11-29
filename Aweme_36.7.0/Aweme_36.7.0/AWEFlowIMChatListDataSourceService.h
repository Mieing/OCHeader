@class AWEIMChatListServiceRegisterConfigModel, NSString, NSObject;
@protocol IESIMBusinessServiceStickOnTopDelegate;

@interface AWEFlowIMChatListDataSourceService : NSObject <AWEIMChatListServiceModelOutsideNotifyProtocol, IESIMBusinessServiceStickOnTopInterface>

@property (weak, nonatomic) NSObject<IESIMBusinessServiceStickOnTopDelegate> *stickOnTopDelegate;
@property (retain, nonatomic) AWEIMChatListServiceRegisterConfigModel *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getChatListServiceModelsWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (id)getLocalChatListServiceModels;
- (void)didTriggerCellEventWithAction:(id)a0;
- (BOOL)enableAddCurrentCellActionWithType:(long long)a0 serviceModel:(id)a1;
- (BOOL)enableFlowTopStatusMigration;
- (id)initForThreadSafe;
- (void).cxx_destruct;
- (id)init;
- (long long)serviceType;

@end
