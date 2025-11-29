@class NSString;

@interface AWELongVideoMetaLanguageInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long rectCorner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
