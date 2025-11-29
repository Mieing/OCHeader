@class NSString, NSData;

@interface TTVideoEngineStorageItem : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) int size;
@property (nonatomic) int modTime;
@property (nonatomic) int accessTime;

- (void).cxx_destruct;

@end
