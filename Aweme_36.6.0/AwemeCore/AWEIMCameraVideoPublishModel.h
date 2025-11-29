@class NSString, UIImage, NSDictionary;
@protocol IESIMMessageExternalRefContextProvider;

@interface AWEIMCameraVideoPublishModel : NSObject <AWEIMCameraPublishModelProtocol>

@property (copy, nonatomic) NSString *trackSharePanelType;
@property (nonatomic) BOOL isBirthdayVideo;
@property (retain, nonatomic) UIImage *firstFrameImage;
@property (copy, nonatomic) NSString *videoURL;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) NSString *videoText;
@property (copy, nonatomic) NSString *originVideoMd5;
@property (retain, nonatomic) UIImage *videoCoverImage;
@property (nonatomic) BOOL need_secondary_refresh;
@property (nonatomic) BOOL isEditPageShare;
@property (copy, nonatomic) NSString *publish_task_id;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *toConversationID;
@property (copy, nonatomic) NSString *quoteReplyMessageID;
@property (nonatomic) BOOL dontChangeToText;
@property (nonatomic) BOOL isIMAigc;
@property (nonatomic) unsigned long long publishType;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *checkText;
@property (nonatomic) BOOL fromGallery;
@property (nonatomic) double clickSendTimeStamp;
@property (nonatomic) BOOL fromCamera;
@property (nonatomic) BOOL isPainted;
@property (nonatomic) BOOL isSocialEffect;
@property (copy, nonatomic) NSString *effectUGCID;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) unsigned long long shootEnterType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *customEnterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *customEnterMethod;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) long long duetType;
@property (nonatomic) long long duetLayout;
@property (nonatomic) long long duetRole;
@property (nonatomic) long long effectCategory;
@property (copy, nonatomic) NSDictionary *effectExtraInfo;
@property (nonatomic) BOOL shouldJustDismissTopViewController;
@property (retain, nonatomic) id<IESIMMessageExternalRefContextProvider> externalRefContextProvider;

- (long long)publishMediaType;
- (void).cxx_destruct;
- (id)contentDictionary;

@end
