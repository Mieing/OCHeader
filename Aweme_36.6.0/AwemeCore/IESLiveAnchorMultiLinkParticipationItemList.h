@class NSString, NSAttributedString, NSArray;

@interface IESLiveAnchorMultiLinkParticipationItemList : NSObject

@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSAttributedString *sectionNameAttr;
@property (nonatomic) int sectionType;
@property (copy, nonatomic) NSArray *list;
@property (nonatomic) long long followItemCount;

- (void).cxx_destruct;

@end
