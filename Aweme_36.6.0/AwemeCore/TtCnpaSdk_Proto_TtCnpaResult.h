@class NSString, TtCnpaSdk_Proto_TtCnpaManifest;

@interface TtCnpaSdk_Proto_TtCnpaResult : GPBMessage

@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (copy, nonatomic) NSString *errorDesc;
@property (nonatomic) BOOL hasErrorDesc;
@property (retain, nonatomic) TtCnpaSdk_Proto_TtCnpaManifest *resultManifest;
@property (nonatomic) BOOL hasResultManifest;
@property (copy, nonatomic) NSString *rawJsonManifest;
@property (nonatomic) BOOL hasRawJsonManifest;

+ (id)descriptor;

@end
