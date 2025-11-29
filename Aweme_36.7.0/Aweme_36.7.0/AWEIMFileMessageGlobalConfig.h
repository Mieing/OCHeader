@class NSArray, NSDictionary, NSSet, NSString;

@interface AWEIMFileMessageGlobalConfig : NSObject <AWEIMFileMessageGlobalConfig>

@property (readonly, nonatomic) NSArray *validChatTypes;
@property (readonly, nonatomic) NSArray *UTISupportList;
@property (readonly, nonatomic) NSArray *extensionDisallowList;
@property (readonly, nonatomic) NSDictionary *extensionToTypeMap;
@property (readonly, nonatomic) NSSet *supportPreviewExtensions;
@property (readonly, nonatomic) long long previewStatusValidDuration;
@property (readonly, nonatomic) long long fileURLExpireBuffer;
@property (readonly, nonatomic) long long selectFileLimitCount;
@property (readonly, nonatomic) long long selectFileLimitSize;
@property (readonly, nonatomic) BOOL enableForwardDurationSending;
@property (readonly, nonatomic) BOOL enableDeleteDurationSending;
@property (readonly, nonatomic) long long fileLastValidDayToTip;
@property (readonly, nonatomic) BOOL supportFTS;
@property (readonly, nonatomic) BOOL systemVCSupportDarkTheme;
@property (readonly, nonatomic) BOOL txtFileEnableUTF8Encoding;
@property (readonly, nonatomic) long long txtFilePreviewSizeThresholdInByte;
@property (readonly, nonatomic) NSDictionary *errStateToTipMap;
@property (readonly, nonatomic) BOOL enableFullTransitionWhenPreview;
@property (readonly, nonatomic) BOOL enableDownloaderCustomBizLineTag;
@property (readonly, nonatomic) NSArray *downloadSuccessCodes;
@property (readonly, nonatomic) BOOL downloadSkipStatusCodeCheck;
@property (readonly, nonatomic) BOOL enableFileUploadConfig;
@property (readonly, nonatomic) BOOL enableFileSendStage;
@property (readonly, nonatomic) BOOL enableFilePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
