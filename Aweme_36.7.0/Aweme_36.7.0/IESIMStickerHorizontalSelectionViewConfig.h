@class UIColor, NSString;

@interface IESIMStickerHorizontalSelectionViewConfig : NSObject <IESIMStickerHorizontalSelectionViewConfig>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double cellSpacing;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *accessibilityPrefix;
@property (copy, nonatomic) NSString *firstFrameTrackScene;
@property (nonatomic) double firstFrameTrackSampleRate;
@property (nonatomic) BOOL needTrackShow;
@property (nonatomic) BOOL needDeduplicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
