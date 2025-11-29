@class NSString, NSNumber;

@interface IESLiveDynamicIslandActivityModel : NSObject

@property (copy, nonatomic) NSString *roomTitle;
@property (copy, nonatomic) NSString *roomSchema;
@property (copy, nonatomic) NSString *anchorName;
@property (copy, nonatomic) NSString *anchorAvatar;
@property (copy, nonatomic) NSString *onlineWatchUser;
@property (copy, nonatomic) NSString *roomDiggTotalCount;
@property (retain, nonatomic) NSNumber *activityStyle;
@property (retain, nonatomic) NSNumber *activityType;
@property (retain, nonatomic) NSNumber *activityProgress;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)init;

@end
