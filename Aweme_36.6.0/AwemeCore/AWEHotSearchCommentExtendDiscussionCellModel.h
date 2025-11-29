@class NSArray, NSString, NSTimer, AWENewHotSpotExtendDiscussionItem;

@interface AWEHotSearchCommentExtendDiscussionCellModel : NSObject <AWECommonFeedCellModelProtocol>

@property (retain, nonatomic) AWENewHotSpotExtendDiscussionItem *rawModel;
@property (copy, nonatomic) NSArray *coverImageURLList;
@property (copy, nonatomic) NSString *hotspotTitleString;
@property (copy, nonatomic) NSString *hotspotCountString;
@property (copy, nonatomic) NSString *currentCommentString;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long animateIndex;
@property (copy, nonatomic) NSArray *commentTextList;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (void)p_setupTimer;
- (void)p_timerAction;
- (void)configWithExtendDiscussionModel:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (void)cancelTimer;
- (void)dealloc;
- (BOOL)isTimerActive;

@end
