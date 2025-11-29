@class NSString, NSData;

@interface WXAppExtendObject : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSData *fileData;

+ (id)object;

- (id)init;
- (void).cxx_destruct;

@end
