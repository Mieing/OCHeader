@class NSString, UIFont;

@interface WCFinderUserRelationshipModel : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL canShowFollowed;
@property (nonatomic) BOOL canShowMyFollow;
@property (nonatomic) BOOL canShowMemberFollowed;
@property (nonatomic) unsigned int interactionCount;
@property (nonatomic) unsigned int orderCount;
@property (copy, nonatomic) NSString *customText;
@property (nonatomic) BOOL canShowAuthor;
@property (retain, nonatomic) UIFont *tagLabelFont;
@property (copy, nonatomic) NSString *poiInteractionLabel;

- (void).cxx_destruct;

@end
