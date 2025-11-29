@class NSArray, NSString, AWEDTOCoverTextAttrInfo, AWEDTOLocationInfoEntry, AWEDTOStyleInfoEntry;

@interface AWEDTOCoverTextInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEffectText;
@property (copy, nonatomic) NSArray *content;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) long long cursorLoc;
@property (nonatomic) long long isCoverText;
@property (retain, nonatomic) AWEDTOCoverTextAttrInfo *coverTextAttr;
@property (retain, nonatomic) AWEDTOStyleInfoEntry *styleInfo;
@property (retain, nonatomic) AWEDTOLocationInfoEntry *locationInfo;
@property (copy, nonatomic) NSString *textImagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverTextAttrJSONTransformer;
+ (id)styleInfoJSONTransformer;
+ (id)locationInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
