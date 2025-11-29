@class NSDictionary;

@interface WCEditVideoColorConfig : NSObject

@property (retain, nonatomic) NSDictionary *colorMap;

+ (id)getColorArray;

- (void)setupColorMapForEmotion;
- (id)init;
- (id)stokeStyleTextColorWithMainColor:(id)a0;
- (id)stokeStyleLayerColorWithMainColor:(id)a0;
- (void)setupDefaultColorMap;
- (void).cxx_destruct;

@end
