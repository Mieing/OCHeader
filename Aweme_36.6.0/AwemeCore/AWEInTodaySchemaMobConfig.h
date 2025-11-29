@class NSString;

@interface AWEInTodaySchemaMobConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *activityMobJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
