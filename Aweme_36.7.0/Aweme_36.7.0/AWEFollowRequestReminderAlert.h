@class NSString, NSDictionary, UIView, NSNumber, AWEUserModel;
@protocol AWEIMFollowRequestReminderProtocol;

@interface AWEFollowRequestReminderAlert : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) id<AWEIMFollowRequestReminderProtocol> followRequestReminderView;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *noticeID;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL needsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)configWithParentView:(id)a0 user:(id)a1 noticeID:(id)a2 extraTrackParams:(id)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
