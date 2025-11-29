@class NSString, NSDictionary, BDPNovelGeneralInsertStrategy;

@interface BDPNovelGeneralElement : NSObject <NSCopying>

@property (copy, nonatomic) NSString *elementId;
@property (nonatomic) double height;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingRight;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *viewParam;
@property (retain, nonatomic) BDPNovelGeneralInsertStrategy *insertStrategy;

+ (id)modelContainerPropertyGenericClass;
+ (id)checkIfHasErrorDic:(id)a0;

- (BOOL)isSatisfied:(long long)a0 offsetEnd:(long long)a1 meta:(id)a2;
- (id)lynxName;
- (BOOL)isSatisfiedForEndMeta:(id)a0;
- (BOOL)isSatisfiedForStartMeta:(id)a0;
- (id)checkIfHasError;
- (long long)startContentIndex;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
