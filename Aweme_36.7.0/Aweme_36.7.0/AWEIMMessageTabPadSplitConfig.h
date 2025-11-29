@class NSArray, NSString;

@interface AWEIMMessageTabPadSplitConfig : NSObject <AWEIMMessageTabPadSplitConfig>

@property (nonatomic) BOOL disableSecondLevelPageRotate;
@property (nonatomic) BOOL enableExternalPushSplit;
@property (nonatomic) BOOL leaveIMTabClosePadSlit;
@property (nonatomic) BOOL enterIMTabClosePadSlit;
@property (nonatomic) BOOL padRotateClosePadSplit;
@property (retain, nonatomic) NSArray *disablePadSplitBisLines;
@property (nonatomic) BOOL adjustMessageHorizontalPadding;
@property (nonatomic) BOOL secondaryVCCanHandleTransitionPanGesture;
@property (nonatomic) BOOL disableSecondaryVCShowTabbar;
@property (nonatomic) BOOL disableHalfScreenVCRotate;
@property (nonatomic) BOOL messageTabRotateComponentCycleCallProtect;
@property (nonatomic) BOOL enableForceChangeRotatability;
@property (nonatomic) BOOL rollbackAdditionExperimentScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
