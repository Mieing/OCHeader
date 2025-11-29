@class NSString;

@interface CJPayThreeDSEnrollResultResonse : JSONModel

@property (copy, nonatomic) NSString *verifyID;
@property (copy, nonatomic) NSString *actionUrl;
@property (copy, nonatomic) NSString *authInformation;
@property (readonly, copy, nonatomic) NSString *accessToken;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
