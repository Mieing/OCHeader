@class AWEAlertContext, NSString, AWEHPBaseComponentModel;

@interface AWEMRInterceptedComponentTask : NSObject

@property (retain, nonatomic) AWEHPBaseComponentModel *model;
@property (retain, nonatomic) AWEAlertContext *context;
@property (copy, nonatomic) id /* block */ canShowCallBack;
@property (retain, nonatomic) NSString *componentType;
@property (nonatomic) long long addTime;
@property (retain, nonatomic) NSString *channelID;

+ (id)createAlertTaskWithAlertContext:(id)a0 canShowCallBack:(id /* block */)a1 componentType:(id)a2;
+ (id)createModelTaskWithModel:(id)a0 channelID:(id)a1 canShowCallBack:(id /* block */)a2 componentType:(id)a3;
+ (id)createComponentTaskWithModel:(id)a0 alertContext:(id)a1 channelID:(id)a2 canShowCallBack:(id /* block */)a3 componentType:(id)a4;

- (void).cxx_destruct;

@end
