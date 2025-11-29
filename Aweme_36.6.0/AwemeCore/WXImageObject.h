@class NSData, NSString;

@interface WXImageObject : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imgDataHash;
@property (copy, nonatomic) NSString *entranceMiniProgramUsername;
@property (copy, nonatomic) NSString *entranceMiniProgramPath;

+ (id)object;

- (void).cxx_destruct;

@end
