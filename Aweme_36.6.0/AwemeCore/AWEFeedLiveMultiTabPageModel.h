@class NSDictionary, NSMutableDictionary;

@interface AWEFeedLiveMultiTabPageModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *cellModelInfo;
@property (retain, nonatomic) NSDictionary *landingParams;

- (id)cellModelAtTabID:(long long)a0;
- (void)resetCellModelWithFeedLiveData:(id)a0 atTabID:(long long)a1 pullType:(long long)a2;
- (void)removeCellModelWithId:(long long)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
