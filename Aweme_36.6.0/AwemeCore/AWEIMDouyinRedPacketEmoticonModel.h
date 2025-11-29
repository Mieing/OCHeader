@class NSString;

@interface AWEIMDouyinRedPacketEmoticonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *emoticonId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *width;
@property (copy, nonatomic) NSString *height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
