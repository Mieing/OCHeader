@class NSString, AWEURLModel;

@interface AWELabelProfileItem : NSObject

@property (nonatomic) long long userId;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *profilePic;

+ (id)profilePicImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
