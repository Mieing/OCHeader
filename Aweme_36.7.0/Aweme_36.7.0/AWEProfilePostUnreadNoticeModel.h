@class NSString, NSArray;

@interface AWEProfilePostUnreadNoticeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) NSArray *commentUsers;
@property (retain, nonatomic) NSArray *diggUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diggUsersJSONTransformer;
+ (id)commentUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
