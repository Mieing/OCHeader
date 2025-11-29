@class NSNumber, NSString;

@interface AWEOCRPortraitLandscapeInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *shortSpacing;
@property (retain, nonatomic) NSNumber *longShortRatio;
@property (retain, nonatomic) NSNumber *longContentRatio;
@property (retain, nonatomic) NSNumber *shortContentRatio;
@property (copy, nonatomic) NSString *scanBgUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
