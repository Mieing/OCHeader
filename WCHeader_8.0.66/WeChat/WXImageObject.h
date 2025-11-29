@class NSData, NSString;

@interface WXImageObject : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imgDataHash;
@property (copy, nonatomic) NSString *miniprogramAppid;
@property (copy, nonatomic) NSString *miniprogramPath;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
