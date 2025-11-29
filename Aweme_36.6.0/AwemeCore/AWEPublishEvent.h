@class NSString;

@interface AWEPublishEvent : NSObject <AWEPublishEventProtocol>

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
