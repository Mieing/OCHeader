@class NSArray, NSString;

@interface IESIMURLModel : MTLModel <MTLJSONSerializing> {
    NSArray *URLList;
}

@property (copy, nonatomic) NSArray *originURLList;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (nonatomic) double sizeByte;
@property (copy, nonatomic) NSString *URI;
@property (readonly, copy, nonatomic) NSString *fileCs;
@property (readonly, copy, nonatomic) NSString *URLKey;
@property (readonly, copy, nonatomic) NSString *fileHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLString:(id)a0 appendCommonParams:(id)a1;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithURLList:(id)a0;
- (id)URLList;
- (id)recommendUrl;
- (void)convertUrlListAddCommonParams;
- (id)getURLDict;
- (id)JSONDictionaryWithoutCommonParameters;
- (id)aweURLModel;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
