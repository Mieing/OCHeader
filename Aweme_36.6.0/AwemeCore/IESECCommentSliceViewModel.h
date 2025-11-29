@class NSString, IESECSliceStyle;

@interface IESECCommentSliceViewModel : IESECSliceSlice

@property (nonatomic) double styleVerticalValue;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) IESECSliceStyle *viewStyle;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) double containerHeight;
@property (nonatomic) BOOL isAlreadyRenderSize;
@property (readonly, nonatomic) unsigned long long viewLoadType;
@property (nonatomic) unsigned long long viewLoadStatus;
@property (nonatomic) BOOL hasFirstUpdateSize;
@property (nonatomic) BOOL showFoldBtn;
@property (readonly, nonatomic) BOOL isForceHeight;
@property (readonly, nonatomic) BOOL isAdapterHeight;
@property (copy, nonatomic) id /* block */ didUpdateViewSize;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;

@end
