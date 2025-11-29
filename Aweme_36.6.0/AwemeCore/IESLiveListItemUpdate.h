@class NSIndexPath;

@interface IESLiveListItemUpdate : IESLiveListUpdate

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSIndexPath *indexPathNew;
@property (copy, nonatomic) id /* block */ itemUpdateBlock;

+ (id)updateWithType:(long long)a0 indexPath:(id)a1 newIndexPath:(id)a2 object:(id)a3;

- (BOOL)isItemUpdate;
- (void).cxx_destruct;

@end
