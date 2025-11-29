@class CdnFile, RawFile, MediaFileRect;

@interface MediaFile : WXPBGeneratedMessage

@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) CdnFile *cdnFile;
@property (retain, nonatomic) RawFile *rawFile;
@property (retain, nonatomic) MediaFileRect *rect;

+ (void)initialize;

@end
