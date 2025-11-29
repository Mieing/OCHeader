@class NSNumber;

@interface AWEIMSearchResultClickContext : NSObject

@property (nonatomic) BOOL recordHistory;
@property (nonatomic) unsigned long long enterMethod;
@property (nonatomic) BOOL isOnline;
@property (retain, nonatomic) NSNumber *isRecommend;

- (id)initWithEnterMethod:(unsigned long long)a0 recordHistory:(BOOL)a1;
- (void).cxx_destruct;

@end
