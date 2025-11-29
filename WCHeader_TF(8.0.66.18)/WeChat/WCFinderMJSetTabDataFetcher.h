@class WCFinderBaseCgi, NSString, NSData, NSMutableArray;

@interface WCFinderMJSetTabDataFetcher : NSObject

@property (weak, nonatomic) WCFinderBaseCgi *fetchCgi;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) int tabType;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (nonatomic) unsigned long long dataLoadedState;
@property (retain, nonatomic) NSData *lastBuff;

- (id)init;
- (void)requestFirstPage:(id /* block */)a0 commentScene:(int)a1;
- (void)requestNextPageWithCommentScene:(int)a0;
- (void)requestPageData:(BOOL)a0 commentScene:(int)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
