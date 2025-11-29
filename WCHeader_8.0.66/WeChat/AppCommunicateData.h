@class NSString, NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface AppCommunicateData : NSObject {
    unsigned long long _command;
    NSMutableDictionary *_dictionaryData;
}

@property (nonatomic) int result;
@property (nonatomic) BOOL returnFromApp;
@property (retain, nonatomic) NSString *conversationAccount;
@property (retain, nonatomic) NSData *fileData;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *sdkVer;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSArray *fileDatas;
@property (copy, nonatomic) NSString *toUserOpenID;
@property (copy, nonatomic) NSString *universalLink;
@property (nonatomic) BOOL isAutoResend;
@property (readonly, nonatomic) unsigned long long appDataLength;
@property (retain, nonatomic) NSDictionary *weixinKeyboardInfo;
@property (nonatomic) unsigned long long dictionaryDataLen;
@property (nonatomic) unsigned long long originTextLen;
@property (copy, nonatomic) NSString *reportAppID;
@property (copy, nonatomic) NSString *reportCurrentUrl;
@property (copy, nonatomic) NSString *reportApiName;

- (id)init;
- (id)initWithPropertList:(id)a0;
- (id)propertList;
- (unsigned long long)command;
- (id)description;
- (void)initCommonField:(unsigned long long)a0;
- (BOOL)MakeCommand:(unsigned long long)a0;
- (id)authRequest;
- (BOOL)MakeAuthRequest:(id)a0;
- (BOOL)MakeAuthResp:(id)a0;
- (BOOL)isTextMessage;
- (id)textMessage;
- (BOOL)MakeTextMessage:(id)a0;
- (BOOL)MakeTextMessageInState:(id)a0;
- (id)weAppExtDic;
- (id)messageExtDic;
- (long long)getMaxFileDataLength;
- (long long)getMaxVideoDataLength;
- (BOOL)shouldShareWXMusicObjectAsH5;
- (id)mediaMessage;
- (BOOL)makeStateSceneObject:(id)a0;
- (BOOL)MakeSceneDataObject:(id)a0 withText:(id)a1;
- (BOOL)MakeLinkObject:(id)a0;
- (BOOL)MakeMediaMessage:(id)a0;
- (id)sceneMessage;
- (id)mediaInternalMessage;
- (id)mediaInternalMessage:(id *)a0;
- (BOOL)isSuportWeishiVideo;
- (BOOL)MakeMediaInternalMessage:(id)a0;
- (BOOL)ReqToData:(id)a0;
- (BOOL)ReqToData:(id)a0 withMediaInternalMessage:(id)a1;
- (BOOL)RespToData:(id)a0;
- (id)transferToString;
- (void).cxx_destruct;

@end
