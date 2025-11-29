@class NSNumber, NSString, AWEAwemeModel;

@interface AWENewNearbyListInsertionCache : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSNumber *awemeCountInResponse;
@property (retain, nonatomic) NSNumber *indexInResponse;
@property (copy, nonatomic) NSString *respID;
@property (copy, nonatomic) id /* block */ complete;
@property (copy, nonatomic) id /* block */ willInsertHandler;

- (void).cxx_destruct;

@end
