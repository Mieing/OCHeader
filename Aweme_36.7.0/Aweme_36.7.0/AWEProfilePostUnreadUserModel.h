@class NSString, AWEURLModel;

@interface AWEProfilePostUnreadUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
