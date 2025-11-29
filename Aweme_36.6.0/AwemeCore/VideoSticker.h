@class NSString;

@interface VideoSticker : IESLivePBBaseMessage

@property (nonatomic) int stickerTypeId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bizData;
@property (copy, nonatomic) NSString *product;
@property (copy, nonatomic) NSString *anchorTrackParams;
@property (copy, nonatomic) NSString *metaData;

+ (id)descriptor;

@end
