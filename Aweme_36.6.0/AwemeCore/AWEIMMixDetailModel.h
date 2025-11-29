@class NSString, NSArray, UIImage, AWEIMMixPhotoAITaskStateInfoModel, AWEIMMixPhotoAIModelInfoModel, NSDictionary, UIViewController, UIColor;

@interface AWEIMMixDetailModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *firstText;
@property (copy, nonatomic) NSString *secondText;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (copy, nonatomic) id /* block */ onButtonClickBlock;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSString *coverImageURL;
@property (nonatomic) BOOL showShareButton;
@property (copy, nonatomic) id /* block */ onShareButtonClickBlock;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL forceDark;
@property (nonatomic) BOOL showLoading;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ remindFriendBLock;
@property (copy, nonatomic) NSArray *userInfoArray;
@property (nonatomic) BOOL needScrollToLast;
@property (nonatomic) BOOL showAiModelView;
@property (retain, nonatomic) AWEIMMixPhotoAIModelInfoModel *aimodel;
@property (retain, nonatomic) AWEIMMixPhotoAITaskStateInfoModel *taskInfoModel;
@property (copy, nonatomic) id /* block */ onVacantCellClickBlock;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *uuidstring;
@property (retain, nonatomic) NSDictionary *extInfo;

- (void)refreshAIModel;
- (void).cxx_destruct;

@end
