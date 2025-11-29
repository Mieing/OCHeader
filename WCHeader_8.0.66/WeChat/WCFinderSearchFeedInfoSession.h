@class NSData, NSMutableArray, NSString;

@interface WCFinderSearchFeedInfoSession : NSObject

@property (retain, nonatomic) NSMutableArray *searchInfos;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSString *reqId;

- (void).cxx_destruct;

@end
