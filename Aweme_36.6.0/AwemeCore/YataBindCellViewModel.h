@class YataABSViewHolder;

@interface YataBindCellViewModel : NSObject <IGListDiffable>

@property (retain, nonatomic) YataABSViewHolder *viewHolder;
@property (copy, nonatomic) id /* block */ sizeChangedCompletion;
@property (copy, nonatomic) id /* block */ manualWillDisplayCompletion;
@property (nonatomic) BOOL isDequeueReusableCell;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithViewHolder:(id)a0;
- (void).cxx_destruct;

@end
