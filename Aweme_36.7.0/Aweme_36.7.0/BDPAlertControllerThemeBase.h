@class NSArray, NSString;

@interface BDPAlertControllerThemeBase : NSObject <BDPAppearance>

@property (copy, nonatomic) NSArray *bdp_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bdp_styleForCategory:(id)a0;

- (void)applyAppearance;

@end
