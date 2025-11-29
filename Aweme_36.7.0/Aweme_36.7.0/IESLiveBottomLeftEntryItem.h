@interface IESLiveBottomLeftEntryItem : NSObject

@property (nonatomic) long long entryType;
@property (copy, nonatomic) id /* block */ showEntryBlock;
@property (copy, nonatomic) id /* block */ availableCheck;

- (void).cxx_destruct;

@end
