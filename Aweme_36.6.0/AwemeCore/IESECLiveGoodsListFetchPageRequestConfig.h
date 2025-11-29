@class NSString, NSDictionary, IESECLiveGoodsListUpdateExtraInfo, NSNumber;

@interface IESECLiveGoodsListFetchPageRequestConfig : NSObject

@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) NSNumber *page;
@property (nonatomic) long long realOrderInList;
@property (nonatomic) long long realIndex;
@property (retain, nonatomic) NSDictionary *fetchParams;
@property (retain, nonatomic) IESECLiveGoodsListUpdateExtraInfo *updateExtraInfo;
@property (nonatomic) BOOL isFetchByLoop;

- (void).cxx_destruct;

@end
