@interface IESLiveApplyItem : IESLiveListViewItem

@property (nonatomic) BOOL isMultiChorusApply;
@property (copy, nonatomic) id /* block */ agreeCompletion;

- (Class)classForItem;
- (void).cxx_destruct;

@end
