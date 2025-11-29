@class NSArray, WCFinderCGIProfile;

@interface WCFinderStreamProfilePageInfo : NSObject

@property (retain, nonatomic) Class pageClass;
@property (nonatomic) BOOL display;
@property (retain, nonatomic) NSArray *overviewSections;
@property (retain, nonatomic) NSArray *overviewCaches;
@property (copy, nonatomic) id /* block */ storeExtInfoAction;
@property (retain, nonatomic) WCFinderCGIProfile *cgiProfile;

+ (id)pageInfoFor:(id)a0;

- (void).cxx_destruct;

@end
