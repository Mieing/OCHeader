@interface AWETaskSpreadMetaTaskInfo : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long cancelCount;

- (id)description;

@end
