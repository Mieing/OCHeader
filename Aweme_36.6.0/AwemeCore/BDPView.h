@class NSArray, NSString;

@interface BDPView : UIView <BDPAppearance, BDPAppearanceStyleMessage>

@property (copy, nonatomic) NSArray *bdp_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)bdp_styleForCategory:(id)a0;
+ (void)applyAppearanceStyle;

@end
