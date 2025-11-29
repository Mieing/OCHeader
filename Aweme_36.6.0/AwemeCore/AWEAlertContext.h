@class NSString, NSDictionary, AWEAlertContainerInfo, UIResponder;
@protocol AWEAlertEventProtocol, AWEAlertProtocol;

@interface AWEAlertContext : NSObject <AWEAlertContextTrackProtocol, AWEAlertContextProtocol>

@property (readonly, nonatomic) BOOL mr_enableAccessControl;
@property (readonly, copy, nonatomic) NSString *mr_accessID;
@property (copy, nonatomic) NSString *mr_componentTaskID;
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
@property (weak, nonatomic) id<AWEAlertProtocol> alert;
@property (nonatomic) long long priority;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (copy, nonatomic) NSString *alertID;
@property (retain, nonatomic) AWEAlertContainerInfo *containerBizInfo;
@property (weak, nonatomic) UIResponder *alertResponder;
@property (nonatomic) unsigned long long canceledReason;
@property (copy, nonatomic) NSString *cancelExtraInfo;
@property (nonatomic) unsigned long long alertViewStyle;
@property (nonatomic) double stagedTimeStamp;
@property (nonatomic) unsigned long long interceptedReason;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) BOOL isForceAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
