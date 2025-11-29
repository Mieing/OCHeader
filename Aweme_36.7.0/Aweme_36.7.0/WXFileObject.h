@class NSString, NSData;

@interface WXFileObject : NSObject

@property (copy, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSData *fileData;

+ (id)object;

- (void).cxx_destruct;

@end
