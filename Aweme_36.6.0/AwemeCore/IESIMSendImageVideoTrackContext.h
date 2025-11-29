@class NSString, NSNumber, AWEIMMessageContent;

@interface IESIMSendImageVideoTrackContext : IESIMSendAttachmentTrackContext

@property (copy, nonatomic) NSString *enterFromOfImageSKII;
@property (copy, nonatomic) NSString *lastGroupID;
@property (nonatomic) BOOL isFromGallery;
@property (nonatomic) BOOL useOriginal;
@property (retain, nonatomic) NSNumber *isFromEditMode;
@property (retain, nonatomic) NSNumber *isBirthdayCard;
@property (retain, nonatomic) NSNumber *isPainted;
@property (nonatomic) BOOL isLivePhoto;
@property (copy, nonatomic) NSString *videoGalleryPath;
@property (retain, nonatomic) AWEIMMessageContent *content;
@property (nonatomic) BOOL needTranscodeAndUploadSpecialTrack;

- (id)buildSendPassThroughTrackParams;
- (id)buildSendContext;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
