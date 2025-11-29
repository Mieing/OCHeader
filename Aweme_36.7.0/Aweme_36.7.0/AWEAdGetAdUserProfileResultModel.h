@class NSString, NSNumber;

@interface AWEAdGetAdUserProfileResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSNumber *curUserFollowed;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSNumber *scenes;
@property (copy, nonatomic) NSNumber *isLive;
@property (copy, nonatomic) NSNumber *curAwemeDigged;
@property (copy, nonatomic) NSNumber *curAwemeDiggCount;
@property (copy, nonatomic) NSNumber *curAwemeCommentCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
