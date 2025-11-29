@class NSString;

@interface GameLiteAppParam : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *queryStr;
@property (retain, nonatomic) NSString *pkgId;
@property (nonatomic) BOOL transParentLiteApp;

+ (id)liteAppParamFromDict:(id)a0;
+ (id)liteAppParaWithAppid:(id)a0 path:(id)a1 queryStr:(id)a2 pkgId:(id)a3;

- (id)description;
- (void).cxx_destruct;

@end
