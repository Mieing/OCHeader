@class NSString, NSMutableArray;

@interface WCFinderFoldFeedReportInfo : NSObject

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long foldFeedCount;
@property (retain, nonatomic) NSMutableArray *foldDetailInfos;
@property (nonatomic) unsigned long long topButtonFirstClickTimeStamp;
@property (nonatomic) unsigned long long moreButtonFirstClickTimeStamp;

+ (id)infoWithDataItem:(id)a0;

- (id)initWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
