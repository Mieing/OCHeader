@class NSArray, NSString, UIView, ACCAIGCCreateLoraModel;
@protocol CAKAlbumBottomViewProtocol, CAKAlbumNavigationViewProtocol;

@interface ACCAILoraDataModel : NSObject

@property (nonatomic) long long loraCreateFrom;
@property (copy, nonatomic) NSArray *originImageFilePath;
@property (copy, nonatomic) NSArray *imageResultList;
@property (copy, nonatomic) NSArray *invalidImageResultList;
@property (nonatomic) long long loraTypeFrom;
@property (nonatomic) BOOL isFromUploadClickAdd;
@property (nonatomic) BOOL needAfterDismissShowToast;
@property (nonatomic) BOOL onlyCreateLoraNotApplyStyle;
@property (nonatomic) BOOL needDeleteOldModel;
@property (nonatomic) long long recreateByPath;
@property (nonatomic) unsigned long long currentAIPropType;
@property (nonatomic) BOOL loraSubTypeUGC;
@property (nonatomic) unsigned long long aiRoleEnterAlbumFromScene;
@property (retain, nonatomic) NSString *aiCreatePage;
@property (retain, nonatomic) UIView<CAKAlbumNavigationViewProtocol> *customNavigationView;
@property (retain, nonatomic) UIView<CAKAlbumBottomViewProtocol> *customBottomView;
@property (retain, nonatomic) ACCAIGCCreateLoraModel *createResultModel;
@property (copy, nonatomic) NSString *resultPageBottomButtonTitle;
@property (copy, nonatomic) NSString *multiEnterFrom;
@property (copy, nonatomic) NSString *multiEnterMethod;
@property (copy, nonatomic) NSString *multiAigcType;
@property (copy, nonatomic) NSString *aiEntrance;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *aiRoleEnterMethod;
@property (copy, nonatomic) NSString *multiPropId;
@property (nonatomic) BOOL AIGroupPhoto;
@property (copy, nonatomic) NSString *createLoraOldModelID;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
