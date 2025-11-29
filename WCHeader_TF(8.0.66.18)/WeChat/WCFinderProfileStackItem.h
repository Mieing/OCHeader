@class NSString, WCFinderStreamProfileViewController;

@interface WCFinderProfileStackItem : NSObject

@property (retain, nonatomic) NSString *profileKey;
@property (weak, nonatomic) WCFinderStreamProfileViewController *vc;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL isAuthor;

- (void).cxx_destruct;

@end
