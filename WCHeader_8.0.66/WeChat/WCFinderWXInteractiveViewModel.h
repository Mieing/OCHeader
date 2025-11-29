@class NSString, FinderNewUserPrepareResponse, NSMutableArray;
@protocol WCFinderWXInteractivePageDelegate;

@interface WCFinderWXInteractiveViewModel : NSObject <WCFinderHistorySwitchExtension>

@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (retain, nonatomic) NSMutableArray *pages;
@property (weak, nonatomic) id<WCFinderWXInteractivePageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportPages;

- (id)initWithUserPrepare:(id)a0;
- (void)dealloc;
- (id)makeTabs;
- (void)onFinderHistorySwitchChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
