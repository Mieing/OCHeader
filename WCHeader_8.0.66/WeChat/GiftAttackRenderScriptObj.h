@class NSString;

@interface GiftAttackRenderScriptObj : NSObject

@property (nonatomic) long long scriptId;
@property (retain, nonatomic) NSString *resourcePath;
@property (nonatomic) long long state;

- (id)initWithScriptId:(long long)a0 resPath:(id)a1;
- (id)initWithEmptyScript;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
