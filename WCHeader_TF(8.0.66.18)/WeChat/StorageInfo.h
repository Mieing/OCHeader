@class NSString;

@interface StorageInfo : NSObject

@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *size;

- (BOOL)isEmpty;
- (void).cxx_destruct;

@end
