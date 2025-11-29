@class WCDataItem, NSString, UIView;
@protocol WCAdRockPaperScissorsLogicDelegate;

@interface WCAdRockPaperScissorsLogic : WCAdvertiseOperationLogicBase <WCAdDynamicCanvasVCExt>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (nonatomic) BOOL markedToShowComment;
@property (weak, nonatomic) id<WCAdRockPaperScissorsLogicDelegate> delegate;
@property (retain, nonatomic) UIView *topBannerPAGView;
@property (retain, nonatomic) UIView *leftDecorPagView;
@property (retain, nonatomic) UIView *rightDecorPagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)dealloc;
- (void)onAdDynamicCanvasNotifyTimelineComment:(id)a0;
- (void)onAdDynamicCanvasNotifyDidBePoped:(id)a0;
- (void)updateRockPaperScissorsInfoWithItem:(id)a0 forceUpdate:(BOOL)a1;
- (void)tryToNotifyCanvasDidBePopedWithDataItem:(id)a0 showComment:(BOOL)a1;
- (void)notifyCanvasDidBePopedWithDataItem:(id)a0 showComment:(BOOL)a1;
- (id)fetchAdOperationLogicKey;
- (void).cxx_destruct;

@end
