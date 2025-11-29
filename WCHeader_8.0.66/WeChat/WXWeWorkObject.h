@class NSData, NSString;

@interface WXWeWorkObject : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int subType;
@property (copy, nonatomic) NSString *extInfo;

+ (id)object;

- (void).cxx_destruct;

@end
