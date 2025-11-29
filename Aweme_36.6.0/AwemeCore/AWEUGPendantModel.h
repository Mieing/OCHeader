@class AWEUGPendantProgressUIInfo, AWEUGPendantUIInfo, NSString, AWEUGPendantCapsuleUIInfo, AWEUGPendantConfig, AWEUGPendantBottomUIInfo, AWEUGPendantNewCapsuleContentModel, NSDictionary, AWEUGPendantCloseUIInfo, AWEUGPendantTimingTaskModel, AWEUGPendantBubbleUIInfo;

@interface AWEUGPendantModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGPendantConfig *pendantConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pendantUIFrame;
@property (retain, nonatomic) AWEUGPendantUIInfo *pendantUIInfo;
@property (retain, nonatomic) AWEUGPendantCapsuleUIInfo *capsuleUIInfo;
@property (retain, nonatomic) AWEUGPendantCloseUIInfo *closeUIInfo;
@property (retain, nonatomic) AWEUGPendantProgressUIInfo *progressUIInfo;
@property (retain, nonatomic) AWEUGPendantBubbleUIInfo *bubbleUIInfo;
@property (retain, nonatomic) AWEUGPendantBubbleUIInfo *edgedBubbleUIInfo;
@property (retain, nonatomic) AWEUGPendantBottomUIInfo *bottomUIInfo;
@property (nonatomic) BOOL enableFCoinDrag;
@property (nonatomic) BOOL enableFeedPendantDrag;
@property (nonatomic) BOOL enableFCoinEdgeView;
@property (nonatomic) BOOL enableDelete;
@property (nonatomic) BOOL showNativeBubble;
@property (retain, nonatomic) AWEUGPendantTimingTaskModel *timingTaskInfo;
@property (retain, nonatomic) AWEUGPendantNewCapsuleContentModel *capsuleContent;
@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
