@class IESLiveCombineSubject;

@interface IESLiveRevenueInteractAioPublisher : NSObject

@property (class, readonly, nonatomic) IESLiveRevenueInteractAioPublisher *sharedInstance;

@property (retain, nonatomic) IESLiveCombineSubject *linkMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *inviteMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *replyMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *applyMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *permitMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *cancelMessagePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *inviteResponsePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *applyResponsePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *cancelResponsePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *permitResponsePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *replyResponsePublisher;

- (void).cxx_destruct;
- (id)init;

@end
