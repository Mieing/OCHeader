@class NSString, GPBEnumArray;

@interface HTSLiveGameRole_DoulinkBindConf : IESLivePBBaseMessage

@property (nonatomic) int doulinkType;
@property (retain, nonatomic) GPBEnumArray *loginTypesArray;
@property (readonly, nonatomic) unsigned long long loginTypesArray_Count;
@property (nonatomic) BOOL isAuth;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *scopes;
@property (copy, nonatomic) NSString *commentId;
@property (nonatomic) BOOL onlyJumpWx;
@property (copy, nonatomic) NSString *txGameCode;

+ (id)descriptor;

@end
