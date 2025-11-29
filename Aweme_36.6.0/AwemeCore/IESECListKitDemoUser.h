@class NSString, IESECListKitDemoAvatar;

@interface IESECListKitDemoUser : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL isFollowed;
@property (retain, nonatomic) IESECListKitDemoAvatar *avatar;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
