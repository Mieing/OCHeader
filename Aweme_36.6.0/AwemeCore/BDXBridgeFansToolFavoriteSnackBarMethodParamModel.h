@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeFansToolFavoriteSnackBarMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *action;
@property (nonatomic) BOOL hasCollectsFolder;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSNumber *videoTime;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL canUpdateNotification;
@property (nonatomic) BOOL favoriteToastShow;
@property (nonatomic) BOOL mustShowFavoriteToast;
@property (nonatomic) BOOL hidden_notice_view;
@property (nonatomic) BOOL is_recommend_collection;
@property (nonatomic) BOOL need_present_long_press_guide;
@property (copy, nonatomic) NSDictionary *coverURLModel;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
