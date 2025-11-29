@class NSNumber, NSString, NSArray;

@interface AWEFollowGroupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) NSArray *userList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
