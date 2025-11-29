@class NSArray, NSString, AFDYellowNumAvatarInfoModel, AWEFriendTabPopInfo;

@interface AWEFriendsTabImpl.FriendTabDotInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ familiarAwemeArray;
    void /* function */ familiarPreloadAwemeIDs;
    void /* function */ familiarCountContext;
    void /* function */ familiarAvatarInfoList;
    void /* function */ friendsRequestUIDs;
}

@property (nonatomic, copy) NSArray *familiarAwemeArray;
@property (nonatomic, copy) NSArray *familiarPreloadAwemeIDs;
@property (nonatomic, retain) AFDYellowNumAvatarInfoModel *friendTabAvatarInfo;
@property (nonatomic) long long yellowDotResultPullType;
@property (nonatomic, copy) NSString *familiarCountContext;
@property (nonatomic, copy) NSArray *familiarAvatarInfoList;
@property (nonatomic, copy) NSArray *friendsRequestUIDs;
@property (nonatomic) unsigned long long countType;
@property (nonatomic, retain) AWEFriendTabPopInfo *popInfo;

+ (id)friendTabAvatarInfoJSONTransformer;
+ (id)familiarAvatarInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
