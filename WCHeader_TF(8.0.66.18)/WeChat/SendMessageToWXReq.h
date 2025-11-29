@class NSString, WXSceneDataObject, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) WXMediaMessage *message;
@property (nonatomic) BOOL bText;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *toUserOpenId;
@property (retain, nonatomic) WXSceneDataObject *sceneDataObject;

- (id)init;
- (void).cxx_destruct;

@end
