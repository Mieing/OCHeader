@class NSArray, IESLiveMutuallyExclusiveViewItemID, NSString;

@interface IESLiveMutuallyExclusiveViewItem : IESLiveDynamicModel {
    NSString *_itemKey;
}

@property (retain, nonatomic) NSArray *mutuallyExclusiveViewItems;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) IESLiveMutuallyExclusiveViewItemID *itemID;
@property (copy, nonatomic) id /* block */ addViewBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (readonly, nonatomic) NSString *itemKey;

- (void).cxx_destruct;
- (id)description;

@end
