@class NSString, SecSdkVideoInfo, NSMutableArray, SecSdkImgInfo;

@interface SecClientSDKMediaFeature : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) SecSdkImgInfo *thumbInfo;
@property (retain, nonatomic) NSMutableArray *imgInfoList;
@property (retain, nonatomic) SecSdkVideoInfo *videoInfo;

+ (void)initialize;

@end
