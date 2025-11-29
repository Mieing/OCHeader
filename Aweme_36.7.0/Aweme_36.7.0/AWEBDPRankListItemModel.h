@class NSString;

@interface AWEBDPRankListItemModel : NSObject

@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *userImg;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long dataType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
