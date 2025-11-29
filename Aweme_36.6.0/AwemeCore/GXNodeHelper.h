@interface GXNodeHelper : NSObject

+ (long long)loadContainerType:(id)a0 subType:(id)a1;
+ (Class)nodeClassWithLayerType:(id)a0 subType:(id)a1;
+ (BOOL)isContainter:(id)a0 subType:(id)a1;
+ (BOOL)isCustom:(id)a0 subType:(id)a1;
+ (BOOL)isTemplateType:(id)a0;

@end
