@class UIImage, AVPlayerItem, AVAssetExportSession, AWEVideoClipKeyManagedObject, ACCEditCompileSession, AWEAVMixedMutableCompositionBuilder, AWEVideoSegmentedClipAdapter, AWEStudioClipInputData, AWEStudioClipOutputData, NSObject;
@protocol AWEVideoClipFooterView, ACCEditVideoDataProtocol;

@interface AWEStudioClipModel : NSObject

@property (readonly, nonatomic) BOOL isStoryMode_deprecated_old4;
@property (readonly, nonatomic) BOOL allowAIMode;
@property (nonatomic) BOOL isSwitchClipMode;
@property (nonatomic) BOOL sliderFixedLengthMode;
@property (nonatomic) BOOL deletedSegment;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preciseSeekTime;
@property (nonatomic) BOOL aiRangeChanged;
@property (nonatomic) BOOL normalRangeChanged;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) AWEStudioClipInputData *inputData;
@property (retain, nonatomic) AWEStudioClipOutputData *outputData;
@property (retain, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property (nonatomic) double initialContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } croppingSize;
@property (retain, nonatomic) AWEAVMixedMutableCompositionBuilder *compositionBuilder;
@property (retain, nonatomic) AWEAVMixedMutableCompositionBuilder *selectedAssetCompositionBuilder;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *playerItemManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *playerDataManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *exportSessionManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *exportVESessionManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *footerViewManagedObject;
@property (retain, nonatomic) AVPlayerItem *selectedAssetPlayerItem;
@property (retain, nonatomic) AVPlayerItem *currentSelectedPlayerItem;
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (retain, nonatomic) AVPlayerItem *normalPlayerItem;
@property (retain, nonatomic) AVPlayerItem *aiPlayerItem;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *selectedAssetPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentSelectedPlayerData;
@property (readonly, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *normalPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *aiPlayerData;
@property (readonly, nonatomic) id<AWEVideoClipFooterView> currentFooterView;
@property (retain, nonatomic) id<AWEVideoClipFooterView> normalFooterView;
@property (retain, nonatomic) id<AWEVideoClipFooterView> aiFooterView;
@property (retain, nonatomic) AVAssetExportSession *normalExportSession;
@property (retain, nonatomic) AVAssetExportSession *aiExportSession;
@property (retain, nonatomic) ACCEditCompileSession *normalExportVESession;
@property (retain, nonatomic) ACCEditCompileSession *aiExportVESession;

- (void).cxx_destruct;
- (void)dealloc;

@end
