@class NSString;

@interface IESGCPPBActivityBanner : GPBMessage

@property (nonatomic) long long activityId;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL forceRotate;

+ (id)descriptor;

@end
