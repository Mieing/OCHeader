@class NSString, FinderLiveMilestoneLotteryMetaInfo_MetaInfo;

@interface MMFinderLiveMilestoneLotteryDetailMenuItem : NSObject

@property (retain, nonatomic) FinderLiveMilestoneLotteryMetaInfo_MetaInfo *metaInfo;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *time;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (copy, nonatomic) id /* block */ selectCallback;

- (void).cxx_destruct;

@end
