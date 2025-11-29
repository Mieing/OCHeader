@class NSString, NSDictionary;

@interface IESLivePKAutoMatchBuildConfig : NSObject

@property (nonatomic) long long matchType;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *sourceStr;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL ignoreAnnouncementIntercept;
@property (copy, nonatomic) NSDictionary *panelTrackParams;

- (void).cxx_destruct;
- (id)init;

@end
