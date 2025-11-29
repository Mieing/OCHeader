@class NSURL, NSDictionary;

@interface TPPlayerSlice : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeader;
@property (nonatomic) long long durationUs;

+ (id)build:(id /* block */)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
