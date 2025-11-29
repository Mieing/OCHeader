@interface IESMetadataStorageInfo : NSObject

@property (nonatomic) int version;
@property (nonatomic) BOOL checkDuplicatedMetadatas;

+ (id)defaultInfo;
+ (id)infoWithData:(id)a0;

- (void)setupWithDictionary:(id)a0;
- (id)binaryData;

@end
