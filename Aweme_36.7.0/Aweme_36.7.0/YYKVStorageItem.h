@class NSString, NSData;

@interface YYKVStorageItem : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) NSString *filename;
@property (nonatomic) int size;
@property (nonatomic) int modTime;
@property (nonatomic) int accessTime;
@property (retain, nonatomic) NSData *extendedData;

- (void).cxx_destruct;

@end
