@class NSString, NSArray, UIImage, AWEUGPushGuideIncentiveModel, AWEUGPushGuideVideoModel, NSDictionary;

@interface AWEUGPushGuideModel : NSObject

@property (nonatomic) BOOL opened;
@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL needImage;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIImage *defaultGuideImage;
@property (copy, nonatomic) NSString *negativeBtnText;
@property (copy, nonatomic) NSString *positiveBtnText;
@property (nonatomic) BOOL isShowHalfAlert;
@property (retain, nonatomic) UIImage *guideImage;
@property (nonatomic) BOOL noticeTop;
@property (copy, nonatomic) NSString *pushTitle;
@property (copy, nonatomic) NSString *pushContent;
@property (copy, nonatomic) NSString *pushImageUrl;
@property (copy, nonatomic) NSString *singleScene;
@property (copy, nonatomic) NSArray *singleSceneList;
@property (nonatomic) BOOL openAllScene;
@property (retain, nonatomic) AWEUGPushGuideVideoModel *unselectedVideoModel;
@property (retain, nonatomic) AWEUGPushGuideVideoModel *selectedVideoModel;
@property (retain, nonatomic) AWEUGPushGuideIncentiveModel *incentiveModel;
@property (retain, nonatomic) NSArray *dynamicUIModels;
@property (retain, nonatomic) NSDictionary *pushClickPayload;

- (id)initFromPushCommonModel:(id)a0;
- (id)initFromSubscribeCommonModel:(id)a0;
- (void)parseForPushGuideModel:(id)a0 extraModel:(id)a1;
- (void).cxx_destruct;

@end
