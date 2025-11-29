@class NSString, NSDictionary;

@interface BDPShareResultModel : BDPBasePluginModel

@property (nonatomic) BOOL noData;
@property (nonatomic) BOOL needAnchor;
@property (nonatomic) BOOL anchorAttach;
@property (nonatomic) BOOL isAppAnchor;
@property (nonatomic) BOOL isPoiAnchor;
@property (nonatomic) BOOL withoutAppAnchor;
@property (nonatomic) BOOL withoutPoiAnchor;
@property (nonatomic) BOOL canMountAnchor;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *ttid;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *ugUrl;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *shareID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *shareToStoryImageUrl;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *miniImageUrl;
@property (copy, nonatomic) NSString *shareChannel;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *poiInfo;
@property (nonatomic) long long appType;
@property (copy, nonatomic) NSString *imMessageJSONStr;
@property (nonatomic) long long imMsgType;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *activityId;

- (id)getResultDict;
- (BOOL)isTalentUserAddMissionAnchor;
- (BOOL)isTalentUserPostMissionAnchor;
- (BOOL)isTalentUserAnchor;
- (void).cxx_destruct;

@end
