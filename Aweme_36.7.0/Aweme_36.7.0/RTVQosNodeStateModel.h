@class NSError, RTVQosNodeStateChangeTrigger;

@interface RTVQosNodeStateModel : NSObject <NSCopying>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) RTVQosNodeStateChangeTrigger *trigger;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
