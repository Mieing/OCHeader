@class NSDictionary, IESLiveEnterRoomAisle, NSNumber;

@interface IESLiveEnterRoomContext : NSObject

@property (nonatomic) BOOL forbidEnter;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic) BOOL allowEnterSameRoomID;
@property (nonatomic) BOOL enableLeaveSameRoom;
@property (nonatomic) BOOL enableDeliverParams;
@property (nonatomic) BOOL enableEnterFinish;
@property (nonatomic) BOOL needFeedRecommendGuide;
@property (nonatomic) BOOL isPriorityAnchorIdEnterRoom;
@property (nonatomic) BOOL toMultiSegue;
@property (nonatomic) BOOL toMultiSegueIgnoreConfig;
@property (nonatomic) BOOL enableFeedDrawer;
@property (nonatomic) BOOL enableUseMultiURL;
@property (nonatomic) long long feedDrawerTabType;
@property (copy, nonatomic) id /* block */ roomFinished;
@property (copy, nonatomic) id /* block */ leaveRoomBlock;
@property (nonatomic) BOOL singleRoom;
@property (nonatomic) BOOL forceSingleRoom;
@property (nonatomic) BOOL disableErrorPrompts;
@property (nonatomic) BOOL disableInnerUrl;
@property (nonatomic) BOOL scrollInSpecifyList;
@property (copy, nonatomic) id /* block */ afterDidLoad;
@property (copy, nonatomic) id /* block */ firstScreenDidLoad;
@property (copy, nonatomic) id /* block */ afterDidLoadBySlide;
@property (nonatomic) BOOL isFromNearbyTV;
@property (nonatomic) BOOL isFromSkylight;
@property (nonatomic) unsigned long long showVCStyle;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (nonatomic) BOOL isDraw;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (weak, nonatomic) IESLiveEnterRoomAisle *parentRoomAisle;
@property (nonatomic) BOOL isFromPreviewEnter;
@property (nonatomic) BOOL roomIsolation;
@property (nonatomic) BOOL disableReplace;
@property (nonatomic) BOOL disableRecPlay;
@property (nonatomic) BOOL isInnerFeedPrestreamEnterRoom;
@property (nonatomic) BOOL isInnerFeedPrestreamRouter;
@property (retain, nonatomic) NSNumber *innerFeedPrestreamRoomID;

- (void).cxx_destruct;

@end
