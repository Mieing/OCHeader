@class NSString;

@interface AWEInteractionFavoriteVideoHelper : NSObject <AWEInteractionFavoriteVideoHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aweFavoriteFileDetailTableViewControllerWithModels:(id)a0 initialIndex:(long long)a1 businessExtraDict:(id)a2 logExtraDict:(id)a3;
+ (void)enterFavoriteDetailPage:(id)a0 logExtraDict:(id)a1;
+ (void)trackEntranceShow:(id)a0 params:(id)a1;


@end
