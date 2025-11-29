@class WCFinderBaseCgi, NSString, NSData, NSMutableArray;

@interface EntertainmentChannelsTagDataModel : NSObject

@property (retain, nonatomic) NSString *themeTag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *feedVMs;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) WCFinderBaseCgi *requestCgi;
@property (nonatomic) unsigned long long refreshInterval;
@property (nonatomic) BOOL isFirstPageRequestFinished;

- (id)initWithTag:(id)a0;
- (void)resetModelState;
- (void).cxx_destruct;

@end
