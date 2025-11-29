@class NSArray;

@interface AWELiveShelfTabCardManagerModel : NSObject

@property (nonatomic) long long tabId;
@property (nonatomic) long long total;
@property (nonatomic) long long offset;
@property (nonatomic) long long preOffset;
@property (nonatomic) long long realOffset;
@property (nonatomic) long long realNextOffset;
@property (copy, nonatomic) NSArray *cardList;

- (void)updatePartCardList:(id)a0;
- (void).cxx_destruct;

@end
