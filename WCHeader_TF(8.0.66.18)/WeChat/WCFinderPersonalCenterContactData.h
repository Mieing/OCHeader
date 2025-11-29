@class UIView, NSString, PrepareFinder, WCFinderRedDotTipsShowInfo, WCFinderContactPreviewData, WCFinderContact;

@interface WCFinderPersonalCenterContactData : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) PrepareFinder *prepare;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *settingRedDot;
@property (nonatomic) unsigned long long cameraRedDotType;
@property (nonatomic) long long cameraBtnState;
@property (nonatomic) long long liveBtnState;
@property (nonatomic) unsigned long long liveEntRedDotShowType;
@property (nonatomic) BOOL incomeReddot;
@property (nonatomic) BOOL showLougout;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *finderMsgBtnRedDotInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *finderMsgBtnRightRedDotInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *memberMsgBtnRedDotInfo;
@property (nonatomic) long long previewItemCount;
@property (retain, nonatomic) WCFinderContactPreviewData *previewData;
@property (retain, nonatomic) NSString *finderPrivateMsgTailText;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *finderPrivateMsgRedDotInfo;
@property (retain, nonatomic) NSString *creatorMsgTailText;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *creatorMsgRedDotInfo;
@property (copy, nonatomic) id /* block */ creatorBindReport;
@property (nonatomic) BOOL newPrepareStyle;
@property (weak, nonatomic) UIView *reportRootView;
@property (nonatomic) int commentScene;

- (void).cxx_destruct;

@end
