@class NSString;

@interface AWEDTOTrimCropModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isTrimCropDraft;
@property (nonatomic) BOOL hasCropped;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) BOOL hasTrimmed;
@property (nonatomic) long long subPathType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
