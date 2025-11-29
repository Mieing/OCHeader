@class AWEHotSearchShareContainerView, NSString, NSDictionary, NSArray, AWEShareHotSearchDataRequestModel;

@interface AWEShareHotSearchModel : AWEBaseApiModel

@property (readonly, nonatomic) unsigned long long targetType;
@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *messageTypeForShareTrack;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL shouldShowQRChannel;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSArray *iconUrlList;
@property (copy, nonatomic) NSString *qrCodeSize;
@property (copy, nonatomic) NSDictionary *qrCodeRequestParams;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) BOOL enablePrefetch;
@property (retain, nonatomic) AWEShareHotSearchDataRequestModel *requestModel;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (copy, nonatomic) NSString *shareImageSchema;
@property (copy, nonatomic) NSDictionary *hotSearchFusionData;
@property (copy, nonatomic) NSArray *QRCodeUrlList;
@property (readonly, copy, nonatomic) NSString *serverData;
@property (nonatomic) double timeoutThreshold;
@property (nonatomic) double hotSearchDataBackTime;
@property (nonatomic) double QRDataBackTime;
@property (retain, nonatomic) AWEHotSearchShareContainerView *containerView;
@property (nonatomic) BOOL hasQRCodeLoadFail;
@property (nonatomic) BOOL hasHotSearchLoadFail;

- (void).cxx_destruct;

@end
