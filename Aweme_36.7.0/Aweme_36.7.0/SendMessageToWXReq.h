@class NSString, WXSceneDataObject, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) WXMediaMessage *message;
@property (nonatomic) BOOL bText;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *toUserOpenId;
@property (retain, nonatomic) WXSceneDataObject *sceneDataObject;

- (void).cxx_destruct;

@end
