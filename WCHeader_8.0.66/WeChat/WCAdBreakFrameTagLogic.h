@class WCAdBreakFramePlayStateTagInfo, UIView;

@interface WCAdBreakFrameTagLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) UIView *iconViewCache;
@property (retain, nonatomic) UIView *titleViewCache;
@property (nonatomic) int interactionState;
@property (retain, nonatomic) WCAdBreakFramePlayStateTagInfo *tagInfo;

- (void).cxx_destruct;

@end
