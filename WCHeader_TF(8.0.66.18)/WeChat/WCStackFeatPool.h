@class NSMutableDictionary;

@interface WCStackFeatPool : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSMutableDictionary *stackFeatDict;
@property (nonatomic) double featStackTime;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)addStackFeat:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
