@class NSString, NSDictionary, CSJAdSlot;

@interface CSJAPIClientConfiguration : NSObject

@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) long long reqType;
@property (copy, nonatomic) NSDictionary *requestDictionary;
@property (copy, nonatomic) NSDictionary *slotParams;
@property (copy, nonatomic) NSString *reqeustID;

- (void).cxx_destruct;

@end
