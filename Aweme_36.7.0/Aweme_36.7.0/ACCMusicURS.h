@class NSString;

@interface ACCMusicURS : ACCURS

@property (copy, nonatomic) NSString *clipId;

+ (id)getSourceFrom;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithClipId:(id)a0;
- (id)initWithParseModel:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getParameters;

@end
