@class NSDictionary;

@interface AWEModelUnusePropertyManager : NSObject

@property (nonatomic) BOOL disableUnuseProperty;
@property (copy, nonatomic) NSDictionary *whiteList;

+ (id)sharedInstance;

- (void)setModelUnusedPropertyOfflineDict:(id)a0;
- (BOOL)shouldDisableProperty:(id)a0 modelName:(id)a1;
- (void).cxx_destruct;

@end
