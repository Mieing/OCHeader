@class NSString;

@interface FavEmoticonItem : FavoritesModel

@property (copy, nonatomic) NSString *md5;
@property (nonatomic) unsigned int uiEmoticonType;
@property (nonatomic) unsigned int uiGameType;
@property (nonatomic) unsigned int uiGameContent;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *cdnUrlString;
@property (copy, nonatomic) NSString *encryptUrlString;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *externUrl;
@property (copy, nonatomic) NSString *externMd5;
@property (copy, nonatomic) NSString *designerId;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *linkId;
@property (copy, nonatomic) NSString *thumbImgUrl;
@property (nonatomic) BOOL showRewardTips;
@property (nonatomic) unsigned int uiEmoticonWidth;
@property (nonatomic) unsigned int uiEmoticonHeight;
@property (copy, nonatomic) NSString *tpUrlString;
@property (copy, nonatomic) NSString *authkey;
@property (copy, nonatomic) NSString *attachedText;
@property (copy, nonatomic) NSString *attachedTextColor;
@property (copy, nonatomic) NSString *lensId;
@property (copy, nonatomic) NSString *emoticonSvrDescStr;

- (void).cxx_destruct;

@end
