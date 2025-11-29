@class NSString;

@interface AWEListenFeedAdapter : AWEListenFeedAdapterDefault <AWEListenFeedAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)weakTarget;

@end
