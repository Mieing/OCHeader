@class NSString;

@interface MMFinderLiveTextStickerRecordAttributes : MMFinderLiveStickerRecordAttributesBase

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) NSString *templateThumbnail;
@property (retain, nonatomic) NSString *templateResourceId;
@property (retain, nonatomic) NSString *templateResourceUri;
@property (retain, nonatomic) NSString *templateResourceMd5Hash;
@property (retain, nonatomic) NSString *templateUnextractedResourcePath;
@property (retain, nonatomic) NSString *templateExtractedResourcePath;

+ (id)stickerRecordAttributesFromItem:(id)a0;

- (id)initWithStickerItem:(id)a0;
- (id)stickerItemFromRecordAttributes;
- (void).cxx_destruct;

@end
