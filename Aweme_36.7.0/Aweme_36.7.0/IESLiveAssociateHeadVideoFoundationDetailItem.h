@class NSString, NSMutableArray;

@interface IESLiveAssociateHeadVideoFoundationDetailItem : NSObject <IGListDiffable>

@property (retain, nonatomic) NSMutableArray *descriptionItem;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long type;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
