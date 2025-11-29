@class NSString;

@interface MP4BoxInfo : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;

- (void).cxx_destruct;

@end
