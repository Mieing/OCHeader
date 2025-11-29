@class NSString, NSDictionary, NSMutableDictionary;

@interface BDUploadImageXInfo : NSObject

@property (nonatomic) long long fileIndex;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSDictionary *metainfoDict;
@property (copy, nonatomic) NSString *encryInfo;
@property (retain, nonatomic) NSMutableDictionary *e2eEncInfoDict;

- (void).cxx_destruct;

@end
