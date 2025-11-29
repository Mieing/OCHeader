@class NSString;

@interface LynxVideoPlayableInvocationPayloadImpl : NSObject <LynxVideoPlayableInvocationPayload>

@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getDurationInMilliseconds;
- (id)initWithDurationInMilliseconds:(long long)a0;

@end
