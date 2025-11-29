@class NSString, NSNumber;

@interface AFDPlayRemoteTogetherRoomMeta : AWEBaseApiModel

@property (nonatomic) long long feedType;
@property (nonatomic) long long roomProvider;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *profileUserID;
@property (retain, nonatomic) NSString *favoriteUserID;
@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *mixID;
@property (nonatomic) long long mixType;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *hostUserID;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSNumber *disableHostSliding;
@property (retain, nonatomic) NSNumber *disableGuestSliding;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
