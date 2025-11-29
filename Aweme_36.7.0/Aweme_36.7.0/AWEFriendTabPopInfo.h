@class NSString, NSArray;

@interface AWEFriendTabPopInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *avatarList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
