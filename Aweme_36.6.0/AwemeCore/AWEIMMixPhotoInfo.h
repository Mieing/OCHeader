@class NSString;

@interface AWEIMMixPhotoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUri;
@property (copy, nonatomic) NSString *imageSkey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
