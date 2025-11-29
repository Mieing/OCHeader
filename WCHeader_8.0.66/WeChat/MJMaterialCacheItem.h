@class NSString, NSDate;

@interface MJMaterialCacheItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *materialID;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSDate *lastAccessTime;
@property (retain, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSString *colorStyleID;
@property (retain, nonatomic) NSString *animPresetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_materialID;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_lastAccessTime;
+ (void)PBArrayAdd_fontName;
+ (void)PBArrayAdd_colorStyleID;
+ (void)PBArrayAdd_animPresetID;
+ (void)initialize;

@end
