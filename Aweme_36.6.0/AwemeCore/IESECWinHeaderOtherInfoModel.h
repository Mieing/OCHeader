@class NSDictionary, NSString, IESECURLModel, IESECRelationFansClubModel, IESECRelationShoppingCartInfoModel, IESECWinLiveInfoModel, IESECWinGenericButtonModel;

@interface IESECWinHeaderOtherInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *nickNameSuffix;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (retain, nonatomic) IESECRelationFansClubModel *fansClubInfo;
@property (copy, nonatomic) NSString *detailURL;
@property (nonatomic) BOOL showFollowButton;
@property (copy, nonatomic) NSString *searchHint;
@property (copy, nonatomic) NSString *windowGuideText;
@property (retain, nonatomic) IESECRelationShoppingCartInfoModel *cartEntryInfo;
@property (copy, nonatomic) NSString *orderURL;
@property (nonatomic) BOOL windowGuideDisplay;
@property (retain, nonatomic) IESECWinLiveInfoModel *liveInfo;
@property (retain, nonatomic) IESECURLModel *coverURL;
@property (copy, nonatomic) NSString *coverColor;
@property (copy, nonatomic) NSString *avatarColor;
@property (retain, nonatomic) IESECWinGenericButtonModel *imEntry;
@property (nonatomic) BOOL followStatus;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *splitConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)splitConfigTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
