@class NSString;

@interface AWEEcomSearchChunkRelationRule : NSObject

@property (nonatomic) unsigned long long sourceChunkType;
@property (nonatomic) unsigned long long targetChunkType;
@property (nonatomic) unsigned long long relationType;
@property (copy, nonatomic) NSString *ruleDescription;

+ (id)ruleWithSourceType:(unsigned long long)a0 targetType:(unsigned long long)a1 relationType:(unsigned long long)a2 description:(id)a3;

- (void).cxx_destruct;

@end
