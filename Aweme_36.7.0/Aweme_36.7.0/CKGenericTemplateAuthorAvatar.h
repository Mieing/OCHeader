@class NSString, NSArray;

@interface CKGenericTemplateAuthorAvatar : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSString *urlKey;
@property (readonly, copy, nonatomic) NSString *fileHash;
@property (readonly, copy, nonatomic) NSString *playerAccessKey;
@property (readonly, nonatomic) long long dataSize;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
