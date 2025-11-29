@class NSString;

@interface IESECSliceXResourceLoadInfo : NSObject <NSCopying>

@property (nonatomic) unsigned long long loadFrom;
@property (nonatomic) unsigned long long geckoVersion;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fetcherNames;

- (id)initWithLoadFrom:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
