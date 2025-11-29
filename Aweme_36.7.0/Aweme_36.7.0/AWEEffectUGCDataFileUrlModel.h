@class NSString, NSArray, NSDictionary;

@interface AWEEffectUGCDataFileUrlModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long urlType;
@property (retain, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
