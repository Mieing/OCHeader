@class NSString;

@interface AWEHotSpotBottomPostConfig : AWEBaseApiModel

@property (nonatomic) long long buttonBGType;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long insertPos;
@property (nonatomic) BOOL isShow;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
