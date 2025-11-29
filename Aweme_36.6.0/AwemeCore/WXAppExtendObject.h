@class NSString, NSData;

@interface WXAppExtendObject : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSData *fileData;

+ (id)object;

- (void).cxx_destruct;

@end
