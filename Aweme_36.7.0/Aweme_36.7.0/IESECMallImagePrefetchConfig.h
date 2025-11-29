@class NSString, NSArray, NSDictionary;

@interface IESECMallImagePrefetchConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *pathSubset;
@property (retain, nonatomic) NSDictionary *urlAppendParams;
@property (copy, nonatomic) NSString *urlRegex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
