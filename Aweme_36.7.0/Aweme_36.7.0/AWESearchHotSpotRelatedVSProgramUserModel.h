@class NSString, NSNumber, AWEURLModel;

@interface AWESearchHotSpotRelatedVSProgramUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) NSNumber *certType;
@property (copy, nonatomic) NSString *linkTo;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
