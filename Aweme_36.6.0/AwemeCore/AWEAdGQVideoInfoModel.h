@class NSString, NSArray;

@interface AWEAdGQVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *sponsorName;
@property (copy, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSArray *requirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requirementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)requireModel;
- (void).cxx_destruct;

@end
