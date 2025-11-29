@class NSString, AWEAlertDemotionStrategyModel, AWEForceAlertCallbackWrapper, AWEForceAlertContext;
@protocol AWEForceAlertProtocol, AWEAlertEventProtocol, AWEAlertContextProtocol;

@interface AWEForceAlertInternalWrapper : NSObject <AWEAlertInternalWrapperProtocol>

@property (retain, nonatomic) AWEAlertDemotionStrategyModel *demotionStrategyModel;
@property (retain, nonatomic) id<AWEForceAlertProtocol> alert;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (retain, nonatomic) AWEForceAlertContext<AWEAlertContextProtocol> *context;
@property (nonatomic) double beginMediaTime;
@property (nonatomic) double endMediaTime;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL showCallbackInvoked;
@property (nonatomic) BOOL closeCallbackInvoked;
@property (retain, nonatomic) AWEForceAlertCallbackWrapper *callbackWrapper;
@property (readonly, copy, nonatomic) NSString *alertID;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)demotionContext;
- (void).cxx_destruct;

@end
