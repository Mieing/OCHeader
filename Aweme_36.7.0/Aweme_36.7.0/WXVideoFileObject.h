@class NSData, NSString;

@interface WXVideoFileObject : NSObject

@property (retain, nonatomic) NSData *videoFileData;
@property (copy, nonatomic) NSString *localIdentifier;

+ (id)object;

- (void).cxx_destruct;

@end
