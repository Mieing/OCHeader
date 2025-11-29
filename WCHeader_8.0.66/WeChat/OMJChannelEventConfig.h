@class NSString;

@interface OMJChannelEventConfig : NSObject

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *finderNickName;

- (id)initWithBackingInfo:(const void *)a0;
- (id)initWithEventName:(id)a0 finderNickName:(id)a1;
- (void).cxx_destruct;

@end
