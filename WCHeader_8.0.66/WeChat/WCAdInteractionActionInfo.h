@class NSString, NSArray;

@interface WCAdInteractionActionInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *actionId;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *resourceId;
@property (nonatomic) unsigned long long drawType;
@property (retain, nonatomic) NSArray *animations;
@property (nonatomic) unsigned long long gestureType;
@property (nonatomic) unsigned long long gestureOperateType;
@property (nonatomic) unsigned long long activityType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
