@class NSArray, NSMutableArray, NSString;

@interface AWEAccessibilityCustomActionsManager : NSObject <AWEAccessibilityCustomActionsManagerProtocol>

@property (retain, nonatomic) NSArray *customActions;
@property (retain, nonatomic) NSMutableArray *subViewsAndFrame;
@property (nonatomic) BOOL hasShowAlert;
@property (nonatomic) BOOL forceCheck;
@property (nonatomic) BOOL useCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchSubviewsConformsToItemProtocol:(id)a0;
- (void)logWarningMessage:(id)a0;
- (void)setupAccessibilityCustomActions:(id)a0;
- (id)fetchAccessibilityCustomActions:(id)a0;
- (void).cxx_destruct;

@end
