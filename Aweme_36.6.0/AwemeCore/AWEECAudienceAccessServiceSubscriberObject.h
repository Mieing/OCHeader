@class NSString, Protocol;
@protocol IESECAudienceAccessServiceSubscriber;

@interface AWEECAudienceAccessServiceSubscriberObject : NSObject <AWELiveAudienceAccessServiceSubscriber, IESECAudienceAccessServiceSubscriber>

@property (weak, nonatomic) id<IESECAudienceAccessServiceSubscriber> subscriber;
@property (retain, nonatomic) Protocol *proto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct objc_method_description { SEL x0; char *x1; })methodSignatureOfProtocol:(id)a0 with:(SEL)a1;

- (id)initWithAccessSubscriber:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
