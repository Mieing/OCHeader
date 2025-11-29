@class NSDictionary, NSString;

@interface AWEMusicCardInteractService : NSObject <DUXSheetDelegate>

@property (copy, nonatomic) NSDictionary *lastDialogParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)sheetDidDismiss:(id)a0;
- (void)showListenMusicLaterBottomNotificationWith:(id)a0 extraParams:(id)a1;
- (BOOL)canShowListenMusicLater;
- (void)markListenMusicLaterShow;
- (void)markListenMusicLaterClick;
- (id)p_calculateText:(id)a0 fallbackText:(id)a1;
- (id)nextRecordStartTsKey;
- (id)listenLaterShowRecordStartKey;
- (double)secondsInDay:(double)a0;
- (id)listenLaterShowCountKey;
- (id)p_diversionParamsFromDialogParams:(id)a0;
- (void)addToListenMusicLaterWithMediaList:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)showDialogWithType:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;

@end
