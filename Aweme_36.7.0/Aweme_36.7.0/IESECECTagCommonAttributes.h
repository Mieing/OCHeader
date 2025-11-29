@class NSString, NSDictionary, NSNumber;

@interface IESECECTagCommonAttributes : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tagShowScene;
@property (copy, nonatomic) NSString *tagShowPosition;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSNumber *viewScaleRatio;
@property (retain, nonatomic) NSNumber *fontScaleRatio;
@property (retain, nonatomic) NSNumber *adaptHeight;
@property (weak, nonatomic) id bizLifecycleObj;
@property (copy, nonatomic) id /* block */ onExpireBlock;

+ (unsigned long long)hash;

- (id)initWithTagShowScene:(id)a0 tagShowPosition:(id)a1;
- (BOOL)isEqualWithNotUpdatedOther:(id)a0;
- (id)initWithSliceElement:(id)a0 elementViewContext:(id)a1;
- (void)updateWithSliceElementViewContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
