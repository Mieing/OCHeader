@class NSString, AWEIMMixImageMessage, AWEIMEncryptedImageInfo, AWEIMImageWaterFallItemUIConfig;

@interface AWEIMMixPhotoWaterFallSuccessCellViewModel : NSObject <AWEIMImageWaterFallItemProtocol>

@property (retain, nonatomic) AWEIMEncryptedImageInfo *imageInfo;
@property (copy, nonatomic) NSString *showText;
@property (retain, nonatomic) AWEIMMixImageMessage *mixImageMessage;
@property (copy, nonatomic) id /* block */ presentMediaDetailBlock;
@property (copy, nonatomic) id /* block */ clickTrackBlock;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMImageWaterFallItemUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapActionBlock;
- (id)encryptedImageInfo;
- (id)initWithMixImageMessage:(id)a0 topViewController:(id)a1;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:(id)a0;

@end
