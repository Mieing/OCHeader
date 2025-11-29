@interface MultiDeviceUtility : NSObject

+ (id)svgLargeIconNameFromType:(unsigned int)a0;
+ (id)svgIconNameFromType:(unsigned int)a0 isLocked:(BOOL)a1;
+ (id)generateLargeIconFromType:(unsigned int)a0;
+ (id)defaultTitleForIconType:(unsigned int)a0;
+ (BOOL)enableLocalSyncChatForIconType:(unsigned int)a0 clientVersion:(unsigned int)a1;
+ (id)generateKidsWatchCheckbox;
+ (id)generateCheckboxWithSideLength:(double)a0 selectedColor:(id)a1;

@end
