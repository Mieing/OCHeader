@class NSString, NSArray, NSData, NSDictionary;

@interface WXMediaInternalMessage : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSData *hdThumbData;
@property (nonatomic) struct CGSize { double width; double height; } hdThumbImageSize;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) NSString *messageAction;
@property (nonatomic) unsigned long long objectType;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *mediaLowBandUrl;
@property (retain, nonatomic) NSString *mediaDataUrl;
@property (retain, nonatomic) NSString *mediaLowBandDataUrl;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSArray *fileDatas;
@property (retain, nonatomic) NSString *appBrandUserName;
@property (copy, nonatomic) NSString *appBrandAppid;
@property (retain, nonatomic) NSString *appBrandPath;
@property (nonatomic) BOOL appBrandWithShareTicket;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) unsigned long long miniProgramType;
@property (nonatomic) BOOL isAppBrandUpdatableMessage;
@property (nonatomic) BOOL isSecrectMessage;
@property (retain, nonatomic) NSDictionary *appBrandExtraInfoDic;
@property (retain, nonatomic) NSDictionary *webPageExtraInfoDic;
@property (retain, nonatomic) NSString *sightCdnVideoUrl;
@property (retain, nonatomic) NSString *sightCdnThumbUrl;
@property (copy, nonatomic) NSString *sightAppThumbUrl;
@property (copy, nonatomic) NSString *parameter;
@property (copy, nonatomic) NSString *fullScheme;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) BOOL bIsShowLaunchFailToast;
@property (copy, nonatomic) NSString *enterpriseCardContent;
@property (nonatomic) long long enterpriseCardMsgType;
@property (nonatomic) int weworkSubType;
@property (copy, nonatomic) NSString *songAlbumUrl;
@property (copy, nonatomic) NSString *songLyric;
@property (nonatomic) long long brandOfficialFlag;
@property (nonatomic) long long relievedBuyFlag;
@property (nonatomic) long long financialLicenseFlag;
@property (copy, nonatomic) NSString *musicVideoSingerName;
@property (copy, nonatomic) NSString *musicVideoAlbumName;
@property (copy, nonatomic) NSString *musicVideoMusicGenre;
@property (nonatomic) unsigned long long musicVideoIssueDate;
@property (copy, nonatomic) NSString *musicVideoIdentification;
@property (retain, nonatomic) NSData *musicVideoHdAlbumThumbData;
@property (nonatomic) unsigned int musicVideoDuration;
@property (copy, nonatomic) NSString *musicVideoOperationUrl;
@property (copy, nonatomic) NSString *videoFileLocalIdentifier;
@property (copy, nonatomic) NSString *musicMid;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int videoDuration;
@property (copy, nonatomic) NSString *shareData;
@property (retain, nonatomic) NSData *gameThumbData;

+ (id)message;

- (id)init;
- (id)logDescription;
- (void).cxx_destruct;

@end
