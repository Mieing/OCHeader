@class NSString, AWEAwemeModel;

@interface AWEFeedSmartLoadmoreMLInputData : NSObject

@property (nonatomic) long long dataSourceCount;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void).cxx_destruct;

@end
