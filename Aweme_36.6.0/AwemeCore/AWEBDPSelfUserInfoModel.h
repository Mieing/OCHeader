@class NSString;

@interface AWEBDPSelfUserInfoModel : NSObject

@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *userImg;
@property (copy, nonatomic) NSString *nickName;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
