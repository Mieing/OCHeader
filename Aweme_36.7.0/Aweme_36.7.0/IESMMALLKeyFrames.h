@class NSMutableDictionary;

@interface IESMMALLKeyFrames : NSObject

@property (retain, nonatomic) NSMutableDictionary *allCanvasKeyFrames;
@property (retain, nonatomic) NSMutableDictionary *allFeatureKeyFrames;
@property (retain, nonatomic) NSMutableDictionary *allInfoStickerKeyFrames;
@property (nonatomic) BOOL iskeyframeExists;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
