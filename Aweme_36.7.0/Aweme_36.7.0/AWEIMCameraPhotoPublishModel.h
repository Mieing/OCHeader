@class UIImage, NSString, NSDictionary;
@protocol IESIMMessageExternalRefContextProvider;

@interface AWEIMCameraPhotoPublishModel : NSObject <AWEIMCameraPublishModelProtocol>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originImage;
@property (copy, nonatomic) NSString *filePath;
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
