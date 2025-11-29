@class NSString, AWEHomepageTopBarTabItemInfo;

@interface AWEHomepageTopBarTabInfo : NSObject

@property (nonatomic) long long index;
@property (nonatomic) long long order;
@property (nonatomic) long long orderAlignMainTab;
@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSString *leafTabID;
@property (nonatomic) BOOL isLandTab;
@property (nonatomic) BOOL isMainTab;
@property (retain, nonatomic) AWEHomepageTopBarTabItemInfo *itemInfo;

- (void).cxx_destruct;

@end
