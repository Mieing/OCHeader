@class NSString, NSDictionary, AWEAlertMRAccessContext, AWEAlertContainerInfo, UIResponder;
@protocol AWEAlertEventProtocol, AWEForceAlertProtocol;

@interface AWEForceAlertContext : NSObject <AWEAlertContextTrackProtocol, AWEAlertContextProtocol>

@property (readonly, copy, nonatomic) NSString *mr_accessID;
@property (copy, nonatomic) NSString *mr_componentTaskID;
@property (retain, nonatomic) AWEAlertMRAccessContext *mrAccessContext;
@property (copy, nonatomic) NSString *mr_enterFrom;
@property (copy, nonatomic) NSDictionary *mr_trackExtra;
@property (readonly, copy, nonatomic) NSString *alertID;
@property (readonly, nonatomic) AWEAlertContainerInfo *containerBizInfo;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, weak, nonatomic) UIResponder *alertResponder;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) BOOL isForceAlert;
@property (readonly, nonatomic) unsigned long long alertViewStyle;
@property (readonly, nonatomic) double stagedTimeStamp;
@property (readonly, nonatomic) unsigned long long interceptedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEForceAlertProtocol> alert;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (weak, nonatomic) UIResponder *alertResponder;
@property (copy, nonatomic) NSString *alertID;
@property (retain, nonatomic) AWEAlertContainerInfo *containerBizInfo;
@property (nonatomic) unsigned long long alertViewStyle;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) BOOL isForceAlert;
@property (readonly, nonatomic) double stagedTimeStamp;
@property (readonly, nonatomic) unsigned long long interceptedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
