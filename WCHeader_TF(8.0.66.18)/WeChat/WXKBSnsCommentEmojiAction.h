@class AppCommunicateData, NSString, OpenApiAppMsgGenerator, EmoticonUploader;

@interface WXKBSnsCommentEmojiAction : WXKBSnsAction <IAppDataExt>

@property (retain, nonatomic) AppCommunicateData *communicateData;
@property (retain, nonatomic) OpenApiAppMsgGenerator *messageGenerator;
@property (retain, nonatomic) EmoticonUploader *emoticonUploader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void)privatePerform;
- (long long)openSDKMessageType;
- (BOOL)precheck;
- (void)generateEmoticonMessage;
- (void).cxx_destruct;

@end
