@class NSDictionary, NSString;

@interface CachalotBaseLayout : NSObject <CachalotLayout, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *layoutInfo;
@property (nonatomic) double itemGap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithLayoutInfo:(id)a0;
- (struct CGSize { double x0; double x1; })generateContainerSizeWithContainerWidth:(double)a0 andLayoutOriginForChildrenLayoutModels:(id)a1;
- (BOOL)isSameLayout:(id)a0;
- (id)fetchLayoutInfo;
- (double)preferredChildLayoutWidthWithContainerWidth:(double)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
