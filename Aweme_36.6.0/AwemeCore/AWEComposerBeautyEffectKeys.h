@class NSString;

@interface AWEComposerBeautyEffectKeys : NSObject

@property (copy, nonatomic) NSString *dataReadyKey;
@property (copy, nonatomic) NSString *lastPanelNameKey;
@property (copy, nonatomic) NSString *lastABGroupKey;
@property (copy, nonatomic) NSString *lastRegionKey;
@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *userHadModifiedKey;

- (id)initWithBusinessName:(id)a0;
- (id)p_defaultKey:(id)a0 withPrefix:(id)a1;
- (void).cxx_destruct;

@end
