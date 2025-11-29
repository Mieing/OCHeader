@class NSString;

@interface ImageConf : MMObject <NSCopying>

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *ratioType;
@property (nonatomic) int count;
@property (nonatomic) int duration;
@property (copy, nonatomic) NSString *subSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDict:(id)a0;
- (id)description;
- (id)toDictString;
- (void).cxx_destruct;

@end
