@class NSString, NSError, NSArray;

@interface HTSShareActivityCompletionHandler : NSObject

@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSError *activityError;
@property (copy, nonatomic) NSArray *returnedItems;
@property (copy, nonatomic) id /* block */ finalCompletion;

- (void)completeWithActivityType:(id)a0 completed:(BOOL)a1 returnedItems:(id)a2 activityError:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithActivityViewController:(id)a0;

@end
