@class NSData, NSString;

@interface WXVideoFileObject : NSObject

@property (retain, nonatomic) NSData *videoFileData;
@property (copy, nonatomic) NSString *localIdentifier;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
