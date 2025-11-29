@class NSString;

@interface AWEIMRTVListSelectBaseViewControllerContext : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *leftNavigationButtonStyle;
@property (copy, nonatomic) NSString *rightNavigationButtonStyle;
@property (copy, nonatomic) NSString *leftNavigationButtonTitle;
@property (copy, nonatomic) NSString *rightNavigationButtonTitle;
@property (nonatomic) long long maxSelectCount;
@property (nonatomic) BOOL infiniteSelect;
@property (nonatomic) BOOL hideCellFriendLabel;
@property (nonatomic) BOOL autoSelectOnlineUsers;
@property (nonatomic) BOOL multiselect;
@property (nonatomic) BOOL isHalfScreen;

- (id)initWithTitle:(id)a0 cellClass:(Class)a1;
- (id)cellIndetifier;
- (void).cxx_destruct;

@end
