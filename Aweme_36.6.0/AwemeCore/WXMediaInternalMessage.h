@class NSString, NSData, NSDictionary;

@interface WXMediaInternalMessage : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSData *hdThumbData;
@property (nonatomic) struct CGSize { double width; double height; } hdThumbImageSize;
@property (copy, nonatomic) NSString *mediaTagName;
@property (copy, nonatomic) NSString *messageExt;
@property (copy, nonatomic) NSString *messageAction;
@property (nonatomic) unsigned long long objectType;
@property (copy, nonatomic) NSString *mediaUrl;
@property (copy, nonatomic) NSString *mediaLowBandUrl;
@property (copy, nonatomic) NSString *mediaDataUrl;
@property (copy, nonatomic) NSString *mediaLowBandDataUrl;
@property (copy, nonatomic) NSString *extInfo;
@property (copy, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSString *appBrandUserName;
@property (copy, nonatomic) NSString *appBrandPath;
@property (nonatomic) BOOL appBrandWithShareTikcet;
@property (nonatomic) unsigned long long appBrandMiniProgramType;
@property (copy, nonatomic) NSString *sightCdnVideoUrl;
@property (copy, nonatomic) NSString *sightCdnThumbUrl;
@property (copy, nonatomic) NSString *sightAppThumbUrl;
@property (copy, nonatomic) NSString *enterpriseCardContent;
@property (nonatomic) long long enterpriseCardMsgType;
@property (nonatomic) int weworkSubType;
@property (copy, nonatomic) NSString *songAlbumUrl;
@property (copy, nonatomic) NSString *songLyric;
@property (nonatomic) BOOL isAppBrandUpdatableMessage;
@property (nonatomic) BOOL isSecretMessage;
@property (retain, nonatomic) NSDictionary *appBrandExtraInfoDic;
@property (retain, nonatomic) NSDictionary *gameLiveExtraInfoDic;
@property (retain, nonatomic) NSDictionary *webPageExtraInfoDic;
@property (copy, nonatomic) NSString *musicVideoSingerName;
@property (retain, nonatomic) NSData *musicVideoHdAlbumThumbData;
@property (copy, nonatomic) NSString *musicVideoAlbumName;
@property (copy, nonatomic) NSString *musicVideoMusicGenre;
@property (copy, nonatomic) NSString *musicVideoIdentification;
@property (nonatomic) unsigned long long musicVideoIssueDate;
@property (nonatomic) unsigned int musicVideoDuration;
@property (copy, nonatomic) NSString *musicVideoOperationUrl;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int videoDuration;
@property (copy, nonatomic) NSString *shareData;
@property (retain, nonatomic) NSData *gameThumbData;

+ (id)message;

- (void).cxx_destruct;
- (id)init;

@end
