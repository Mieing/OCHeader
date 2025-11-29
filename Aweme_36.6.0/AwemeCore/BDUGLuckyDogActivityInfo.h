@class NSString;

@interface BDUGLuckyDogActivityInfo : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *actHash;
@property (nonatomic) BOOL isUnionLogin;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
