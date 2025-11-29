@class NSString;
@protocol AWESearchResultVCProtocol;

@interface AWESearchExtraParamsUtility : NSObject

@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSString *initialSearcKeyword;
@property (copy, nonatomic) NSString *initialGeneralSearchId;
@property (copy, nonatomic) NSString *preGeneralSearchId;
@property (weak, nonatomic) id<AWESearchResultVCProtocol> searchResultViewController;

- (id)fetchAllExtraParams;
- (void)resetParams;
- (id)fetchUserExtraParams;
- (id)fetchGeneralExtraParams;
- (void).cxx_destruct;

@end
