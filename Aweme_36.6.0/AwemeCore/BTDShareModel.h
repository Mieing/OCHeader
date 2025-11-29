@class NSString, NSMutableDictionary, UIImage, NSURL, NSData;

@interface BTDShareModel : NSObject <IESIMShareModelProtocol>

@property (retain, nonatomic) UIImage *shareImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isNewShare) BOOL newShare;
@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *shareImageURL;
@property (retain, nonatomic) UIImage *shareImage;
@property (copy, nonatomic) NSString *shareURL;
@property (copy, nonatomic) NSString *shareDescription;
@property (copy, nonatomic) NSString *textFormatForCopy;
@property (copy, nonatomic) NSString *shortLink;
@property (copy, nonatomic) NSURL *gifFileURL;
@property (copy, nonatomic) NSData *videoData;
@property (retain, nonatomic) NSURL *videoFileURL;
@property (retain, nonatomic) NSURL *videoAssetURL;
@property (retain, nonatomic) NSURL *videoALAssetURL;
@property (copy, nonatomic) NSString *shareShortenBelong;
@property (nonatomic) BOOL shareUrlDisable;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

- (void).cxx_destruct;

@end
