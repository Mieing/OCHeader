@class NSString, NSArray, NSData, WCFinderDataItem;

@interface WCFinderLiveMakePackageOrderParams : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned int targetLevel;
@property (nonatomic) unsigned long long orderWecoinAmount;
@property (copy, nonatomic) NSString *orderRequestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSArray *chooseProudctList;

- (void).cxx_destruct;

@end
