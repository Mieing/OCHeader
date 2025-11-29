@class NSArray, NSString;

@interface IESECWinFilterDiffableModel : IESECWinBaseFilterDiffableModel

@property (nonatomic) long long currentSortType;
@property (nonatomic, getter=isSearch) BOOL search;
@property (copy, nonatomic) NSArray *selectButtons;
@property (nonatomic) BOOL hideSelectedButton;
@property (nonatomic) BOOL showSelectPanelButton;
@property (copy, nonatomic) NSString *selectPanelSchema;

- (void).cxx_destruct;

@end
