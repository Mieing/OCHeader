@class NSString;

@interface AWESearchHotSpotRelatedBackgroundInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *iconDark;
@property (copy, nonatomic) NSString *iconLight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
