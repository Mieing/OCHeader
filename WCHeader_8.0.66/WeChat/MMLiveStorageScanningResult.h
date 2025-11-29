@class NSDictionary, MMLiveStorageDirectory, NSMutableDictionary;

@interface MMLiveStorageScanningResult : NSObject

@property (retain, nonatomic) MMLiveStorageDirectory *head;
@property (retain, nonatomic) NSMutableDictionary *fileReferences;
@property (readonly, nonatomic) MMLiveStorageDirectory *root;
@property (readonly, nonatomic) NSDictionary *sharedFileReferences;

- (void).cxx_destruct;

@end
