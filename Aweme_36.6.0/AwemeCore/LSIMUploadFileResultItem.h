@class NSString, NSNumber, NSDictionary;

@interface LSIMUploadFileResultItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *secrectKey;
@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
