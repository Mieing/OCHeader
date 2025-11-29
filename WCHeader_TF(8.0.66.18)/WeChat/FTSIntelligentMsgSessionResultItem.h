@class NSString, NSMutableArray, NSArray;

@interface FTSIntelligentMsgSessionResultItem : NSObject

@property (nonatomic) BOOL hasCheck;
@property (nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSMutableArray *clusterResults;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *arrMsgItem;
@property (retain, nonatomic) NSArray *arrFaceClusterItem;
@property (nonatomic) unsigned int searchResultCount;

- (void).cxx_destruct;

@end
