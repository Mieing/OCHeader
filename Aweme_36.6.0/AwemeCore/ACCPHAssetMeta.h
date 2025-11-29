@class NSString;

@interface ACCPHAssetMeta : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) unsigned long long pixelWidth;
@property (nonatomic) unsigned long long pixelHeight;
@property (nonatomic) double creationDate;
@property (nonatomic) double modificationDate;

+ (id)snapShot:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
