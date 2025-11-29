@class NSString, AWEURLModel;

@interface AWEPOISimpleUserInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatorThumb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
