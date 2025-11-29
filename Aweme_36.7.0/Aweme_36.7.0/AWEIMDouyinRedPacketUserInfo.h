@class NSString, NSNumber, NSArray;

@interface AWEIMDouyinRedPacketUserInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSNumber *fansStatus;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSArray *multiAvatarUrlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
