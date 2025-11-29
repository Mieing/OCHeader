@class AVAsset, NSString, NSURL, FinderFromAppInfo, MMUIViewController;
@protocol WCFinderLongVideoChooseHelperDelegate;

@interface WCFinderLongVideoChooseHelper : NSObject <WCActionSheetDelegate>

@property (copy, nonatomic) id /* block */ shortAction;
@property (retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL isSlowMotionVideo;
@property (retain, nonatomic) FinderFromAppInfo *fromAppInfo;
@property (weak, nonatomic) MMUIViewController *context;
@property (weak, nonatomic) id<WCFinderLongVideoChooseHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLongVideoPostEntryWithShortAction:(id /* block */)a0;
- (void)startLongVideoPostWithAsset:(id)a0 videoUrl:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheetCancel:(id)a0;
- (id)genTimelineVideoTimeFormatByUInt:(unsigned int)a0;
- (void).cxx_destruct;

@end
