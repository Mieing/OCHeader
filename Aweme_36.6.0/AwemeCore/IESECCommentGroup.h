@class NSString, NSArray, IESECSliceStyle, IESECCommentLynxViewModel;

@interface IESECCommentGroup : MTLModel <MTLJSONSerializing, IGListDiffable>

@property (copy, nonatomic) NSString *sliceID;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSArray *slices;
@property (retain, nonatomic) IESECSliceStyle *style;
@property (retain, nonatomic) IESECCommentLynxViewModel *lynx;
@property (nonatomic) BOOL lynxModuleDisabled;
@property (nonatomic) BOOL isLynx;
@property (nonatomic) BOOL isSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
