@class NSString, NSMutableArray;

@interface WCFinderProfileUserPageMergePostingFetcher : NSObject <WCFinderProfileUserPageFetcher>

@property (retain, nonatomic) NSMutableArray *postedDataItems;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
