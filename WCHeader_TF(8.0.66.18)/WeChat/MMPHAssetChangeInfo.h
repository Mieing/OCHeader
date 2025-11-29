@class NSArray;

@interface MMPHAssetChangeInfo : NSObject

@property (retain, nonatomic) NSArray *additionAssetIds;
@property (retain, nonatomic) NSArray *deleteAssetIds;
@property (nonatomic) long long latestNewAssetIndex;
@property (nonatomic) long long changeCount;

- (void).cxx_destruct;

@end
