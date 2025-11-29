@class FinderJumpInfo_Style, MMTimer, NSString, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewBaseDelegate;

@interface WCFinderJumpInfoView : UIView <WCFinderJumpInfoViewProtocol>

@property (nonatomic) int showPosition;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned long long feedExposeTimestamp;
@property (nonatomic) unsigned long long viewExposeTimestamp;
@property (weak, nonatomic) id<WCFinderJumpInfoViewBaseDelegate> delegate;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldHiddenJumpInfoView:(id)a0 playPos:(double)a1;
+ (id)genAdReportExtraInfo:(id)a0 pos:(unsigned long long)a1;

- (void)dealloc;
- (void)notifyToShow;
- (void)changeToShow:(BOOL)a0;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)setFeedExposeTime:(unsigned long long)a0;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (void).cxx_destruct;

@end
