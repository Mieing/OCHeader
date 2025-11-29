@protocol IESECSliceXInlineCustomContent;

@interface IESECSliceXInlineCustom : IESECSliceXInlineContent

@property (nonatomic) BOOL isHidden;
@property (retain, nonatomic) id<IESECSliceXInlineCustomContent> customContent;

+ (BOOL)isInlineCustomType:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;

@end
