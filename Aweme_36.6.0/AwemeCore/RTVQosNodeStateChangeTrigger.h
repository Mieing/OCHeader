@class NSString, NSError;

@interface RTVQosNodeStateChangeTrigger : NSObject

@property (readonly, copy, nonatomic) NSString *triggerNodeIdentifier;
@property (readonly, nonatomic) NSError *error;

- (id)initWithNodeIdentifier:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
