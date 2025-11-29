@class NSString, NSMutableArray;

@interface SnsMusicStorage : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSMutableArray *musicsArr;
@property (nonatomic) int newCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_musicsArr;
+ (void)PBArrayAdd_newCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
