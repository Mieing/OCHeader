@class NSString;

@interface LiteAppPkgInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *patchId;
@property (nonatomic) BOOL isAutoCheck;

- (id)init:(id)a0 baseId:(id)a1;
- (void).cxx_destruct;

@end
