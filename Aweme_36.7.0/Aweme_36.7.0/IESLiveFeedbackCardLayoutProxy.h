@class NSString, NSObject;
@protocol IESLiveFeedbackCardLayoutProtocol;

@interface IESLiveFeedbackCardLayoutProxy : NSProxy <IESLiveFeedbackCardLayoutProtocol>

@property (retain, nonatomic) NSObject<IESLiveFeedbackCardLayoutProtocol> *feedbackCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)hybridContainerHeight;
- (id)initWithFeedbackItem:(id)a0 extraParams:(id)a1 trackContext:(id)a2 diContext:(id)a3;
- (id)initWithFeedItem:(id)a0 trackContext:(id)a1 diContext:(id)a2;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
