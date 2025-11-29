@class NSString, NSArray;

@interface AWEDTOCoverClipParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long previewCoverStartTimeInMilliseconds;
@property (nonatomic) BOOL previewCoverFromAlbum;
@property (copy, nonatomic) NSString *previewCoverOriginPath;
@property (nonatomic) long long previewCoverOriginWidth;
@property (nonatomic) long long previewCoverOriginHeight;
@property (nonatomic) long long previewAspectRatio;
@property (copy, nonatomic) NSString *draftClipImageFilePath;
@property (nonatomic) long long draftCoverWidth;
@property (nonatomic) long long draftCoverHeight;
@property (copy, nonatomic) NSArray *previewMatrix;
@property (copy, nonatomic) NSArray *previewClipRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
