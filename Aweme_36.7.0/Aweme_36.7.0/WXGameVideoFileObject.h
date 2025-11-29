@class NSData, NSString;

@interface WXGameVideoFileObject : NSObject

@property (retain, nonatomic) NSData *videoFileData;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *thumbUrl;

+ (id)object;

- (void).cxx_destruct;

@end
