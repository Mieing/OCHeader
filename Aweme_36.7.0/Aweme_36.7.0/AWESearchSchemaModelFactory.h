@interface AWESearchSchemaModelFactory : NSObject

+ (id)createSchemaModelAndTrackWithDict:(id)a0;
+ (id)createSchemaModelWithDict:(id)a0 needTrack:(BOOL)a1;
+ (void)trackErrorWithType:(unsigned long long)a0 keys:(id)a1 model:(id)a2;
+ (void)trackParamsWith:(id)a0 model:(id)a1;
+ (void)trackParamsDiff:(id)a0 model:(id)a1;
+ (id)createSchemaModelWithDict:(id)a0;
+ (void)comparePreCreateSchemaModelWithInitialProperties:(id)a0 preCreateSchemaModel:(id)a1;

@end
