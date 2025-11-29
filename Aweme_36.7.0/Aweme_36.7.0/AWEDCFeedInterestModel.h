@class NSString, NSArray;

@interface AWEDCFeedInterestModel : NSObject

@property (copy, nonatomic) NSString *navigationTitle;
@property (nonatomic) BOOL canShowSearchEntry;
@property (copy, nonatomic) NSArray *tabItemModelArray;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long defaultLandingTab;
@property (copy, nonatomic) NSString *enterHomepageTabProcessID;

- (void).cxx_destruct;
- (id)init;

@end
