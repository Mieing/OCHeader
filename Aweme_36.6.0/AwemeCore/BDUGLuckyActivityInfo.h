@class NSString;

@interface BDUGLuckyActivityInfo : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *actHash;
@property (nonatomic) BOOL isUnionLogin;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
