@class HTSLiveText, NSString, NSTimer, IESLivePinOperateInfo, NSDictionary, NSAttributedString, HTSLiveHighlightAreaPriorityConfig;
@protocol IESLivePinCommentNodeDelegate;

@interface IESLivePinCommentNode : NSObject

@property (retain, nonatomic) NSTimer *countdownTimer;
@property (retain, nonatomic) id customParams;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSAttributedString *titleAttr;
@property (retain, nonatomic) IESLivePinOperateInfo *operateInfo;
@property (nonatomic) BOOL showOperateArea;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *areaPriorityConfig;
@property (nonatomic) BOOL needCheck;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) double displayDuration;
@property (weak, nonatomic) id<IESLivePinCommentNodeDelegate> delegate;
@property (nonatomic) double preferHeight;
@property (nonatomic) long long duplicateID;
@property (nonatomic) BOOL hasChecked;
@property (nonatomic) BOOL hasTrackShow;
@property (nonatomic) double responseTime;
@property (nonatomic) double wrdsTime;
@property (nonatomic) long long pinId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDictionary *buriedPoint;

- (double)calculateDisplayDurationWithEndTime:(long long)a0 maxDuration:(double)a1;
- (void)startDisplaydurationTimer;
- (void)pinCommentNodeDisplayTimeout;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end
