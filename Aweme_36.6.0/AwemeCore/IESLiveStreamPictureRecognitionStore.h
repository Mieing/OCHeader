@class HTSEventContext, NSArray, NSString, IESLiveStreamPictureRecognitionMonitor, IESLiveStreamPictureRecognitionApi;
@protocol IESLiveRoomService, IESLiveStreamPictureRecognitionReactions;

@interface IESLiveStreamPictureRecognitionStore : NSObject

@property (weak, nonatomic) id<IESLiveStreamPictureRecognitionReactions> reactions;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveStreamPictureRecognitionApi *api;
@property (retain, nonatomic) NSArray *componentRelatedSlotList;
@property (copy, nonatomic) NSString *noResultSchema;
@property (retain, nonatomic) IESLiveStreamPictureRecognitionMonitor *monitor;

- (void)beginToRecognizeWithScene:(int)a0 entryType:(id)a1 btmToken:(id)a2;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 reactions:(id)a2;
- (void)showNoResultViewWithScene:(int)a0 entryType:(id)a1;
- (void)registerRecognizeAnchorEntry;
- (void)registerRecognizeGoodsEntry;
- (void)setupComponentRelatedList;
- (BOOL)shouldShowRecognizeAnchorEntry;
- (BOOL)shouldShowRecognizeGoodsEntry;
- (void)recognizingViewWillShowOrHide:(BOOL)a0 entryType:(id)a1;
- (id)getStreamPicture;
- (id)recognizeGoodsBusinessParamsWithEntry:(id)a0;
- (id)getStreamPictureFromPlayerView;
- (void).cxx_destruct;

@end
