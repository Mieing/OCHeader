@class NSString, AWEURLModel;

@interface AWEIMToFollowUser : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) BOOL isGroupOwner;
@property (retain, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
