@class NSString, NSData;

@interface WXFileObject : NSObject

@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSData *fileData;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
