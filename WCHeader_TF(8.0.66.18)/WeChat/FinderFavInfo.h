@class NSString, FinderPoiInteractionInfo, FinderIdentityInfo, NSMutableArray;

@interface FinderFavInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *favId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) unsigned int identityFlag;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;
@property (nonatomic) unsigned int thankFlag;
@property (nonatomic) unsigned int thankIconType;
@property (retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo;
@property (retain, nonatomic) NSMutableArray *interactionLabelList;
@property (retain, nonatomic) FinderIdentityInfo *finderIdentity;

+ (void)initialize;

@end
