@class ChatroomMsgPack, NSString, UIImage, MMAsset;
@protocol GCImgMsgWrapperDelegate;

@interface GCImageMsgWrapper : NSObject

@property (retain, nonatomic) NSString *cdnKey;
@property (weak, nonatomic) id<GCImgMsgWrapperDelegate> delegate;
@property (retain, nonatomic) MMAsset *mmAsset;
@property (retain, nonatomic) UIImage *defaultThumbImage;
@property (retain, nonatomic) UIImage *donloadedThumbImage;
@property (retain, nonatomic) NSString *nsAesKey;
@property (retain, nonatomic) NSString *midImgUrl;
@property (nonatomic) struct CGSize { double width; double height; } midImgSize;
@property (nonatomic) struct CGSize { double width; double height; } thumbSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) ChatroomMsgPack *msgPack;
@property (nonatomic) BOOL isUPload;
@property (retain, nonatomic) NSString *chatRoomName;
@property (readonly, nonatomic) NSString *thumPath;
@property (readonly, nonatomic) NSString *imgPath;
@property (nonatomic) long long uploadStage;
@property (nonatomic) unsigned int m_uiPercent;
@property (nonatomic) long long imgCdnStatus;

+ (id)createChatroomMsgImageWithImgWrap:(id)a0;
+ (id)imgWrapFromMsgPack:(id)a0 chatRoomName:(id)a1;
+ (id)msgWrapperFromMsgPack:(id)a0 oAsset:(id)a1 chatRoomName:(id)a2;
+ (void)deleteChatRoomImgDir;
+ (void)deleteImgDirOfchatRoomName:(id)a0;
+ (id)getChatRoomImgDir;
+ (id)getChatRoomPathComponent:(id)a0;
+ (id)getChatRoomImgDirOfChatroom:(id)a0;
+ (id)imageWrapperFromImage:(id)a0 imageData:(id)a1 chatRoomMsgPack:(id)a2 nsAesKey:(id)a3 chatRoomName:(id)a4;

- (id)init;
- (void)createCdnKey;
- (id)statusDesc;
- (id)description;
- (id)getCurrentChatRoomPathComponent;
- (id)getCurrentChatRoomPathOfSubPathComponent:(id)a0;
- (id)getChatRoomImgDirOfMsgPack:(id)a0;
- (id)getImgThumbDirOfMsgPack:(id)a0;
- (id)fileNameOfMsgPack:(id)a0;
- (id)getMaskedThumImgPathOfMsgPack:(id)a0;
- (id)getMesImgOfMsgPack:(id)a0;
- (BOOL)isThumbImageExist;
- (BOOL)isMidImgExist;
- (id)genThumbImageFromImgPath;
- (id)genThumbImageFromImage:(id)a0;
- (BOOL)uploadImage;
- (BOOL)triggerReSendImage;
- (BOOL)handleImageGenerated:(id)a0 imageData:(id)a1;
- (void)showToastForImageFail:(id)a0;
- (BOOL)checkClientMsgIdMatch:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
