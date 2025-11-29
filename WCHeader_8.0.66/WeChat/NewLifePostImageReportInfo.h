@class NSString, NSMutableArray;

@interface NewLifePostImageReportInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSString *imageId;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) unsigned int imageReferred;
@property (retain, nonatomic) NSString *maasTemplateId;
@property (retain, nonatomic) NSString *maasFilterId;
@property (retain, nonatomic) NSMutableArray *maasImageStickerIds;
@property (retain, nonatomic) NSMutableArray *maasTitleStickerIds;

+ (void)initialize;

@end
