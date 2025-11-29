@class NSString, NSMutableArray, NSArray;

@interface FTSMsgSessionResultItem : NSObject

@property (nonatomic) BOOL hasCheck;
@property (nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSMutableArray *clusterResults;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *arrMsgItem;

- (void).cxx_destruct;

@end
