@class NSString, AWEAlertDemotionStrategyModel, AWEAlertContext, NSObject;
@protocol AWEAlertEventProtocol, AWEAlertProtocol, NSCopying, AWEAlertContextProtocol;

@interface AWEAlertInternalWrapper : NSObject <NSCopying, AWEAlertInternalWrapperProtocol>

@property (retain, nonatomic) AWEAlertDemotionStrategyModel *demotionStrategyModel;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL displayFinished;
@property (nonatomic) BOOL isHandling;
@property (nonatomic) BOOL isSuspending;
@property (nonatomic) BOOL needResume;
@property (nonatomic) long long priority;
@property (retain, nonatomic) id<AWEAlertEventProtocol> eventItem;
@property (retain, nonatomic) id<AWEAlertEventProtocol> originEventItem;
@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSString *originEventID;
@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) id<AWEAlertProtocol> alert;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEAlertContext<AWEAlertContextProtocol> *context;
@property (nonatomic) BOOL prepareIsCallback;
@property (nonatomic) BOOL showCallbackInvoked;
@property (nonatomic) BOOL closeCallbackInvoked;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMatchingIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
