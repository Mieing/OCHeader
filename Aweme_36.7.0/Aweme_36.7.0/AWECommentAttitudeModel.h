@class NSString;

@interface AWECommentAttitudeModel : AWEBaseApiModel

@property (nonatomic) BOOL hasAttitude;
@property (copy, nonatomic) NSString *attitudeType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
