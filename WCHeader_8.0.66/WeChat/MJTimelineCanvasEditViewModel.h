@class OMJAspectRatio, MJTimelineViewModel, NSArray, NSMutableDictionary, MJPlaybackViewModel;

@interface MJTimelineCanvasEditViewModel : NSObject

@property (retain, nonatomic) MJTimelineViewModel *timelineVM;
@property (retain, nonatomic) MJPlaybackViewModel *playbackVM;
@property (retain, nonatomic) NSArray *cellItems;
@property (nonatomic) long long selectedItemIndex;
@property (retain, nonatomic) NSMutableDictionary *originalSegmentLayerSpatialInfos;
@property (retain, nonatomic) OMJAspectRatio *originalAspectRatio;
@property (nonatomic) unsigned long long originalContentScaleMode;
@property (copy, nonatomic) id /* block */ updateSelectionHandler;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1;
- (void)setupData;
- (void)handleSelectItemAtIndexPath:(id)a0;
- (BOOL)hasChanges;
- (void).cxx_destruct;

@end
