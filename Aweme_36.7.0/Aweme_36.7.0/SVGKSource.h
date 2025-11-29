@class NSString, NSInputStream;

@interface SVGKSource : NSObject <NSCopying>

@property (retain, nonatomic) NSString *svgLanguageVersion;
@property (retain, nonatomic) NSInputStream *stream;
@property (nonatomic) unsigned long long approximateLengthInBytesOr0;
@property (retain, nonatomic) NSString *keyForAppleDictionaries;

- (id)initForCopying;
- (id)initWithInputSteam:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
