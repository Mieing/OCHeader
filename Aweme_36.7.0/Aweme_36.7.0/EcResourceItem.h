@class NSString;

@interface EcResourceItem : NSObject

@property (copy, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *mime;

- (void).cxx_destruct;

@end
