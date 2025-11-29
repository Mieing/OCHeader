@class NSDictionary, NSMutableDictionary, NSString;

@interface MMLiteAppUniversalParamsInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *query;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;

- (id)initWithUniversalUrl:(id)a0;
- (void)parseUniversalUrl:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
