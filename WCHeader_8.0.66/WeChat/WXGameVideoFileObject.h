@class NSData, NSString;

@interface WXGameVideoFileObject : NSObject

@property (retain, nonatomic) NSData *videoFileData;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbUrl;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
