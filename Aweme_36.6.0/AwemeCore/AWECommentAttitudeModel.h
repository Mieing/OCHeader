@class NSString, NSDictionary;

@interface AWECommentAttitudeModel : AWEBaseApiModel

@property (nonatomic) BOOL hasAttitude;
@property (copy, nonatomic) NSString *attitudeType;
@property (copy, nonatomic) NSDictionary *attitudeAuditMap;
@property (copy, nonatomic) NSDictionary *attitudeCountMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
