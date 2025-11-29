@class UIColor, NSString, NSDictionary, AWEAwemeModel;

@interface AWEKnowledgeVideoDetailPayload : NSObject

@property (retain, nonatomic) AWEAwemeModel *itemModel;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double seekTime;
@property (copy, nonatomic) NSString *prePage;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *feedCardShowEventName;
@property (copy, nonatomic) NSString *coverLoadScene;
@property (copy, nonatomic) NSString *cardClickEventName;
@property (nonatomic) long long showInteractionStatus;
@property (copy, nonatomic) NSString *isGraphicDetailRecommend;
@property (nonatomic) BOOL shouldOptimizeLfeedCover;
@property (nonatomic) BOOL enterSlidesOriginFromHangout;
@property (nonatomic) BOOL waterfallAllowMix;
@property (nonatomic) BOOL useTopNavigationVCPush;
@property (nonatomic) BOOL showCoverImageIcon;
@property (nonatomic) BOOL showCoverVideoIcon;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL enableEnterAlbumFeed;
@property (retain, nonatomic) UIColor *cellBackGroundColor;
@property (copy, nonatomic) id /* block */ innerDataControllerMaker;

- (void).cxx_destruct;

@end
