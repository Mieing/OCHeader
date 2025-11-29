@class NSData, NSString, AVAsset;

@interface AWEIMAttachmentObject : NSObject

@property (nonatomic) int fileType;
@property (retain, nonatomic) NSData *attachment;
@property (retain, nonatomic) NSString *attachmentPath;
@property (retain, nonatomic) NSString *attachmentMD5;
@property (retain, nonatomic) NSString *locoalVideoGalleryPath;
@property (nonatomic) BOOL isVideoFromShareExtension;
@property (retain, nonatomic) NSString *attachmentAssetIdentifier;
@property (retain, nonatomic) AVAsset *attachmentAsset;
@property (nonatomic) BOOL shouleNotGenerateQuickData;
@property (retain, nonatomic) NSData *quickData;

- (void).cxx_destruct;

@end
