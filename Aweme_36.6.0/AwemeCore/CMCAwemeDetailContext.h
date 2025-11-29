@class NSArray, NSDictionary, NSString, NSMutableArray, AWEUserModel;

@interface CMCAwemeDetailContext : CMCContext

@property (nonatomic) BOOL shouldRequestAd;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSArray *itemIds;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) unsigned long long lastAdShowGap;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long profileSessionID;
@property (retain, nonatomic) AWEUserModel *profileAdUser;
@property (copy, nonatomic) id /* block */ modelAtIndex;
@property (copy, nonatomic) id /* block */ deleteAwemeWithIDs;
@property (copy, nonatomic) id /* block */ playIfActivated;
@property (copy, nonatomic) NSDictionary *reportInfo;
@property (nonatomic) BOOL isFingureDragging;
@property (retain, nonatomic) NSString *actionType;

- (void).cxx_destruct;

@end
