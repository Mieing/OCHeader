@class MMListenItem;

@interface TingListenItemStorageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenItem *listenItem;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) BOOL isFilter;

+ (void)initialize;

@end
