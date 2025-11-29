@class NSString, NSMutableArray;

@interface PatMessageWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *chatUserName;
@property (nonatomic) unsigned long long patCount;
@property (retain, nonatomic) NSMutableArray *patWraps;
@property (readonly, nonatomic) BOOL shouldHighlightDigest;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (BOOL)exceedsFoldCount;
- (id)digest;
- (id)highlightDigest;
- (id)patWrapWithCreateTime:(unsigned long long)a0 fromUserName:(id)a1 pattedUserName:(id)a2;
- (id)patWrapWithServerId:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
