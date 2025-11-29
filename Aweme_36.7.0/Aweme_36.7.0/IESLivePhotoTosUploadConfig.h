@class NSDictionary, NSString;
@protocol IESLivePhotoImageXUploadRequestParams;

@interface IESLivePhotoTosUploadConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) long long actionType;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxHeight;
@property (nonatomic) unsigned long long maxLength;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL disableEdit;
@property (nonatomic) double aspectX;
@property (nonatomic) double aspectY;
@property (nonatomic) BOOL saveAlbum;
@property (retain, nonatomic) id<IESLivePhotoImageXUploadRequestParams> imageXParams;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
