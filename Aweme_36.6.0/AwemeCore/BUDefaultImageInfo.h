@class NSString;

@interface BUDefaultImageInfo : NSObject

@property (nonatomic) long long w;
@property (nonatomic) long long h;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *colorSpace;
@property (copy, nonatomic) NSString *textureFormat;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NSString *extDesc;
@property (copy, nonatomic) NSString *extType;

- (void).cxx_destruct;

@end
