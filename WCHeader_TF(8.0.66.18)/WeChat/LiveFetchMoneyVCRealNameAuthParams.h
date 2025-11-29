@class NSString, FinderEncashPrepareInfo;

@interface LiveFetchMoneyVCRealNameAuthParams : NSObject

@property (nonatomic) unsigned int businessId;
@property (nonatomic) BOOL needRefreshPage;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) FinderEncashPrepareInfo *targetEncashPrepareInfo;

- (void).cxx_destruct;

@end
