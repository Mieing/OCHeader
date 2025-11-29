@class NSString, NSDictionary;

@interface BDUploadImageInfo : NSObject

@property (nonatomic) long long fileIndex;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSDictionary *metainfoDict;
@property (copy, nonatomic) NSDictionary *encryInfo;

- (void).cxx_destruct;

@end
