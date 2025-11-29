@class NSString;

@interface AWEDetailTrendDescriptionModel : AWEDetailCommonDiffableModel

@property (copy, nonatomic) NSString *descriptionString;
@property (nonatomic) BOOL isExpandedStatus;
@property (copy, nonatomic) id /* block */ expandAction;

- (void).cxx_destruct;

@end
