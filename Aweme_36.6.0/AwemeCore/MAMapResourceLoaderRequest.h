@class NSString;

@interface MAMapResourceLoaderRequest : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double expectWidth;
@property (nonatomic) double expectHeight;

- (void).cxx_destruct;

@end
