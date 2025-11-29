@class NSString, NSError, NSDictionary;

@interface AWEUserEventTrackerInfo : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *carrier;
@property (copy, nonatomic) NSString *themeId;
@property (nonatomic) BOOL themeIsShow;
@property (nonatomic) BOOL perfMonitor;
@property (nonatomic) BOOL needStagingFlag;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *params;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
