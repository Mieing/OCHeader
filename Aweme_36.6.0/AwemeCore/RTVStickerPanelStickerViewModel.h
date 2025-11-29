@class NSString, RxPromise, IESEffectModel;

@interface RTVStickerPanelStickerViewModel : NSObject <RTVStickerPanelStickerInterface>

@property (retain, nonatomic) RxPromise *lastSelectPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long state;
@property (nonatomic) double downloadProgress;
@property (readonly, nonatomic) IESEffectModel *sticker;
@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, copy, nonatomic) NSString *originalEffectID;
@property (readonly, nonatomic) BOOL hadDownloaded;

- (id)effectFilePath;
- (id)iconDownloadURLs;
- (id)hintIconDownloadURLs;
- (id)stickerID;
- (id)initWithStickerID:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (id)sourceIdentifier;
- (id)tags;
- (id)hintLabel;
- (id)stickerName;
- (id)resourceIdentifier;
- (id)initWithSticker:(id)a0;
- (void)updateDownloadProgress:(double)a0;

@end
