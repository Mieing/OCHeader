@class NSString;

@interface AWEShareActivitySDKModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) unsigned long long shareType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
