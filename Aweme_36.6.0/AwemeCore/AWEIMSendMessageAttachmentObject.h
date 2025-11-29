@class NSDate, NSString, UIImage, AWEIMSendMessageCallBackTarget, NSArray, AWEIMMessageContent, NSDictionary, AWEIMMessage, IESIMSendMessageSecurityCheckContext, NSNumber, AWEIMShareGroupChatScreenShootModel;
@protocol IESIMMessageExternalRefContextProvider, AWEIMAlbumAssetPreprocessorProtocol;

@interface AWEIMSendMessageAttachmentObject : NSObject <IESIMSendAttachmentNodeInput, IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) id<AWEIMAlbumAssetPreprocessorProtocol> preProcessor;
@property (nonatomic) long long quoteReplyServerMessageID;
@property (nonatomic) long long quoteReplyMessageType;
@property (copy, nonatomic) NSString *quoteReplyMessageHint;
@property (retain, nonatomic) id<IESIMMessageExternalRefContextProvider> externalRefContextProvider;
@property (retain, nonatomic) NSString *optionalMessageID;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) AWEIMMessageContent *content;
@property (nonatomic) unsigned long long createFrom;
@property (copy, nonatomic) NSDictionary *sendContext;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (nonatomic) double startSendTimestamp;
@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) long long encodeDuration;
@property (copy, nonatomic) NSString *resourceType;
@property (nonatomic) double resourceSize;
@property (nonatomic) double startUploadTimestamp;
@property (nonatomic) BOOL shouldWaitTranscode;
@property (nonatomic) BOOL needSecondaryRefresh;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (nonatomic) BOOL useOriginal;
@property (nonatomic) BOOL isLivePhoto;
@property (copy, nonatomic) NSString *resourceFrom;
@property (retain, nonatomic) NSString *userDefinedEnterMethod;
@property (retain, nonatomic) NSString *userDefinedEnterFrom;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSNumber *isFromEditMode;
@property (retain, nonatomic) NSString *effectBizScene;
@property (retain, nonatomic) NSNumber *isPainted;
@property (nonatomic) BOOL isFromGallery;
@property (retain, nonatomic) AWEIMSendMessageCallBackTarget *sendCallBack;
@property (retain, nonatomic) NSNumber *isBirthdayCard;
@property (copy, nonatomic) NSString *enterFromOfImageSKII;
@property (copy, nonatomic) NSString *lastGroupID;
@property (readonly, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *stickerIDs;
@property (retain, nonatomic) NSDate *assetModificationDate;
@property (retain, nonatomic) AWEIMShareGroupChatScreenShootModel *chatScreenShootModel;
@property (retain, nonatomic) AWEIMMessage *combineShareMsg;
@property (retain, nonatomic) AWEIMMessage *verifiedCombineShareMsg;
@property (copy, nonatomic) NSDictionary *paramsForFormatAI;
@property (copy, nonatomic) NSString *paramsForActivity;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataOfAsset:(id)a0;
+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;
+ (id)dataOfUIImage:(id)a0 isUseOrigin:(BOOL)a1;
+ (id)getVideoAttachmentWithIdentifier:(id)a0 asset:(id)a1 avAsset:(id)a2;

- (id)initWithAsset:(id)a0 checkText:(id)a1 fromGallery:(BOOL)a2 originMD5:(id)a3 publishType:(unsigned long long)a4 extParams:(id)a5;
- (id)initWithAsset:(id)a0 checkText:(id)a1 fromGallery:(BOOL)a2 originMD5:(id)a3 publishType:(unsigned long long)a4;
- (id)initWithAsset:(id)a0 checkText:(id)a1 fromGallery:(BOOL)a2 originMD5:(id)a3;
- (id)initWithLocalURL:(id)a0 firstFrameImage:(id)a1 coverImage:(id)a2 videoText:(id)a3 fromGallery:(BOOL)a4 originVideoMD5:(id)a5 publishType:(unsigned long long)a6 extraInfo:(id)a7;
- (id)initWithLocalURL:(id)a0 firstFrameImage:(id)a1 coverImage:(id)a2 videoText:(id)a3 fromGallery:(BOOL)a4 originVideoMD5:(id)a5;
- (id)initWithAVURLAsset:(id)a0 firstFrameImage:(id)a1 coverImage:(id)a2 videoText:(id)a3 fromGallery:(BOOL)a4 originVideoMD5:(id)a5;
- (void)fillInOutputContext:(id)a0;
- (id)initWithLocalURL:(id)a0 URLAsset:(id)a1 firstFrameImage:(id)a2 coverImage:(id)a3 videoText:(id)a4 fromGallery:(BOOL)a5 originVideoMD5:(id)a6 publishType:(unsigned long long)a7 extraInfo:(id)a8;
- (long long)p_getVideoAwetypeWith:(unsigned long long)a0;
- (long long)p_getImageAwetypeWith:(unsigned long long)a0 concreteType:(long long)a1 isExchangeLocation:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
