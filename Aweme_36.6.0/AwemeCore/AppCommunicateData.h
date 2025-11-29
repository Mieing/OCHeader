@class NSString, NSData, NSMutableDictionary;

@interface AppCommunicateData : NSObject {
    unsigned long long _command;
    NSMutableDictionary *_dictionaryData;
}

@property (nonatomic) int result;
@property (nonatomic) BOOL returnFromApp;
@property (copy, nonatomic) NSString *conversationAccount;
@property (retain, nonatomic) NSData *fileData;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *sdkVer;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *toUserOpenID;
@property (copy, nonatomic) NSString *universalLink;
@property (nonatomic) BOOL isAutoResend;

- (id)mediaMessage;
- (void)initCommonField:(unsigned long long)a0;
- (BOOL)makeStateSceneObject:(id)a0;
- (BOOL)MakeLinkObject:(id)a0;
- (BOOL)ReqToData:(id)a0 withMediaInternalMessage:(id)a1;
- (BOOL)MakeTextMessageInState:(id)a0;
- (BOOL)MakeSceneDataObject:(id)a0 withText:(id)a1;
- (BOOL)MakeTextMessage:(id)a0;
- (BOOL)MakeMediaMessage:(id)a0;
- (BOOL)MakeMediaInternalMessage:(id)a0;
- (void)makeChannelShareVideoToDicData:(id)a0;
- (BOOL)MakeCommand:(unsigned long long)a0;
- (BOOL)MakeAuthResp:(id)a0;
- (id)propertList;
- (id)tryRemoveUnnecessaryData:(id)a0;
- (id)initWithPropertList:(id)a0;
- (BOOL)MakeAuthRequest:(id)a0;
- (id)authResp;
- (id)weAppExtDic;
- (id)sceneMessage;
- (id)mediaInternalMessage;
- (id)DataToReq;
- (id)DataToResp;
- (BOOL)ReqToData:(id)a0;
- (BOOL)RespToData:(id)a0;
- (id)transferToStringWithDataErasedPtr:(BOOL *)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)command;
- (id)init;
- (id)textMessage;
- (id)authRequest;

@end
