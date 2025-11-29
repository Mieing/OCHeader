@class NSMutableDictionary, NSMutableArray;

@interface ACCEditBeautyEffectCompontentManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *lastActionModelsInfo;
@property (retain, nonatomic) NSMutableArray *faceResult;
@property (retain, nonatomic) NSMutableDictionary *publishTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *publishEnterVideoPostPageTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *publishSaveDraftTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *publishDownloadDraftTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *publishTrackEditBeautifyInfo;
@property (retain, nonatomic) NSMutableDictionary *publishReferExtraTrackInfo;
@property (nonatomic) long long videoPlayingStatusType;
@property (nonatomic) BOOL isMultipersonStatus;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
