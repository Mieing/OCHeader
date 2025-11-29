@class SelectedTags, EnableContacts;

@interface AffRoamRouteResult : WXPBGeneratedMessage

@property (nonatomic) BOOL selectConfirmed;
@property (retain, nonatomic) EnableContacts *selectedContacts;
@property (retain, nonatomic) SelectedTags *selectedTags;
@property (nonatomic) unsigned long long selectedTimeMs;

+ (void)initialize;

@end
