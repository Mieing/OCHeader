@class NSArray, NSAttributedString, NSString;

@interface IESLivePKInviteeListItemSection : NSObject

@property (nonatomic) long long sectionNumber;
@property (copy, nonatomic) NSAttributedString *sectionName;
@property (nonatomic) int sectionType;
@property (nonatomic) int recommendStatus;
@property (copy, nonatomic) NSArray *list;
@property (nonatomic) BOOL showTips;
@property (copy, nonatomic) NSString *filterTips;
@property (nonatomic) BOOL showFilterButton;
@property (nonatomic) BOOL needHiddenSectionHeaderView;

- (void).cxx_destruct;

@end
