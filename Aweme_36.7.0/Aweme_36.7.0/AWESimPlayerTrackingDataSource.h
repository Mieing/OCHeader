@class AWEPlayVideoViewController, NSArray, NSString, NSDictionary, NSNumber;
@protocol BDSimVideoBSModel, BDSimPlayModel, IESVideoPlayerProtocol, BDSimSuperResImpl;

@interface AWESimPlayerTrackingDataSource : NSObject <BDSimPlayerTrackingDataProvider>

@property (weak, nonatomic) AWEPlayVideoViewController *playerVC;
@property (retain, nonatomic) id<BDSimPlayModel> model;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (weak, nonatomic) id<BDSimSuperResImpl> superResolutionManager;
@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (retain, nonatomic) id<BDSimVideoBSModel> manualBSModel;
@property (retain, nonatomic) NSArray *playURLs;
@property (nonatomic) BOOL isCDNURLExpired;
@property (retain, nonatomic) NSString *HDRVideoMode;
@property (nonatomic) long long trategyType;
@property (retain, nonatomic) NSNumber *calcBitrate;
@property (nonatomic) int projectionModelType;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *avOutsyncInfo;
@property (retain, nonatomic) NSDictionary *contextInfoWhenStop;
@property (retain, nonatomic) NSNumber *playbackTimeWhenStop;
@property (retain, nonatomic) NSNumber *playBitrateWhenStop;
@property (retain, nonatomic) NSDictionary *firstFrameTimestamp;
@property (nonatomic) BOOL enableMvmafVqosDataUpload;
@property (nonatomic) BOOL enablesVideoBlockWithSpeedAndBitrate;
@property (nonatomic) BOOL useCachedVideoModelMetaDict;
@property (nonatomic) BOOL enablePlayerVolumeInfoTrack;
@property (nonatomic) BOOL downLoadTaskCount;
@property (retain, nonatomic) NSDictionary *open1080SrFilterConfig;
@property (nonatomic) BOOL enableBitrateSelectionDevRecords;
@property (nonatomic) BOOL enableTTPlayerDualCoreRear;
@property (nonatomic) BOOL enableManualBitrateSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
