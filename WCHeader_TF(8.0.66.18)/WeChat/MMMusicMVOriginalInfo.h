@class NSString;

@interface MMMusicMVOriginalInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) float originality;
@property (nonatomic) float completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_originality;
+ (void)PBArrayAdd_completion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (float)originalityPercentValue;
- (float)completionPercentValue;

@end
