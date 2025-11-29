@class NSString;

@interface AWEVideoDraftPOIModel : NSObject <NSCoding>

@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *poiTag;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
