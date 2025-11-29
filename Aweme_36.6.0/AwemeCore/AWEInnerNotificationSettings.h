@interface AWEInnerNotificationSettings : NSObject

@property (readonly, nonatomic) BOOL enableValidateBlockCondition;
@property (readonly, nonatomic) BOOL enableLoopBlockCheck;
@property (readonly, nonatomic) BOOL appStateDependency;
@property (readonly, nonatomic) BOOL useHigherPriorityQueue;

- (id)initWithDictionary:(id)a0;

@end
