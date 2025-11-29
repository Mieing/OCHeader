@class NSString;

@interface FinderWxAppInfo : WXPBGeneratedMessage

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) FinderWxAppInfo *validInfo;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appUrl;
@property (retain, nonatomic) NSString *appUsername;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setAppUsername:(id)a0;
- (id)appUsername;
- (void)setAppUrl:(id)a0;
- (id)appUrl;
- (void)setAppId:(id)a0;
- (id)appId;
- (id)archivedWCTValue;

@end
