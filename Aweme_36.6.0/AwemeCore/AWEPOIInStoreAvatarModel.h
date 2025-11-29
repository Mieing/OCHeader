@class NSString, NSArray;

@interface AWEPOIInStoreAvatarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *urlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendUrl;
- (void).cxx_destruct;

@end
