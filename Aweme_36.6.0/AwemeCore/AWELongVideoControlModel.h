@class AWECodeGenTimerVideoInfoModel, NSString, AWEServerPermissionActionModel, NSNumber, AWECodeGenAllowRecordTimeScopeModel;

@interface AWELongVideoControlModel : AWEBaseApiModel

@property (retain, nonatomic) AWEServerPermissionActionModel *downloadInfo;
@property (retain, nonatomic) AWEServerPermissionActionModel *duetInfo;
@property (retain, nonatomic) NSNumber *timerStatusNumber;
@property (nonatomic) BOOL allowDownload;
@property (nonatomic) long long shareType;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) BOOL canDragProgressBar;
@property (nonatomic) BOOL allowDuet;
@property (nonatomic) BOOL allowReact;
@property (nonatomic) BOOL allowDynamicWallPaper;
@property (nonatomic) long long preventDownloadType;
@property (nonatomic) long long timerStatusOver;
@property (nonatomic) BOOL allowMusic;
@property (nonatomic) BOOL allowDouPlus;
@property (nonatomic) long long downloadSetting;
@property (retain, nonatomic) NSNumber *allowShareAsStory;
@property (retain, nonatomic) NSNumber *shareAsStoryGrayed;
@property (nonatomic) BOOL downloadIgnoreVisibility;
@property (nonatomic) BOOL duetIgnoreVisibility;
@property (nonatomic) BOOL storyShareIgnoreVisibility;
@property (nonatomic) long long allowTranscribe;
@property (nonatomic) BOOL allowProjectScreen;
@property (copy, nonatomic) NSString *disableProjectScreenReason;
@property (nonatomic) long long screencastOnly;
@property (nonatomic) BOOL allowRecord;
@property (copy, nonatomic) NSString *disableRecordReason;
@property (retain, nonatomic) AWECodeGenTimerVideoInfoModel *timerInfo;
@property (retain, nonatomic) AWECodeGenAllowRecordTimeScopeModel *allowRecordTime;

+ (id)downloadInfoJSONTransformer;
+ (id)AWELongVideoControlModel_subModelPropertyKey;
+ (id)duetInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shareGrayed;
- (void).cxx_destruct;
- (id)init;

@end
