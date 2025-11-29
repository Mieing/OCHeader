@class NSString;

@interface WCFinderMsgChangeRoleViewItem : NSObject

@property (retain, nonatomic) NSString *headURL;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *descTitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isGlobalSelected;
@property (nonatomic) BOOL isFinderContact;
@property (nonatomic) BOOL disableSelect;
@property (nonatomic) long long roleType;

- (void).cxx_destruct;

@end
