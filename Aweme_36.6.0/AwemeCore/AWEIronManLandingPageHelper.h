@interface AWEIronManLandingPageHelper : NSObject

+ (id)trackParamsFromEnterFromType:(unsigned long long)a0;
+ (id)paramForSpecialWithEntranceType:(unsigned long long)a0;
+ (id)sourceFromEnterFromType:(unsigned long long)a0;
+ (id)mergeTrackParamsFromParams:(id)a0 commons:(id)a1;
+ (id)highQualityImageURLWithBaseName:(id)a0 useTheme:(BOOL)a1;
+ (id)pageTypeWithEntranceType:(unsigned long long)a0;
+ (id)bdpLogFromEnterFromType:(unsigned long long)a0;
+ (id)sceneFromEnterFromType:(unsigned long long)a0;
+ (id)entranceFormViaEnterFromType:(unsigned long long)a0;
+ (id)fromPageFromEnterFromType:(unsigned long long)a0 subSource:(id)a1;
+ (id)searchEmptyImageURL;
+ (id)searchSourceFromSearchRange:(unsigned long long)a0;
+ (void)fetchSidebarGuidanceWithEnterFrom:(unsigned long long)a0 complection:(id /* block */)a1;
+ (void)showSidebarGuidanceWithData:(id)a0 enterFrom:(unsigned long long)a1 onView:(id)a2;
+ (id)backgroundImageURL;

@end
