@class NSString, NSDictionary;

@interface BDUploadObjectInfo : NSObject

@property (nonatomic) long long fileIndex;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSDictionary *metainfoDict;
@property (copy, nonatomic) NSString *encryInfo;

- (void).cxx_destruct;

@end
