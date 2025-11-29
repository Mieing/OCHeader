@class NSString, WCFinderDataItem;

@interface EcsProductCardMessageModel : NSObject

@property (copy, nonatomic) NSString *anchorFinderUsername;
@property (copy, nonatomic) NSString *lastGMsgId;
@property (copy, nonatomic) NSString *sourceAppID;
@property (copy, nonatomic) NSString *passBuffer;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long realProductId;
@property (copy, nonatomic) NSString *ecSource;
@property (copy, nonatomic) NSString *promoterkey;
@property (nonatomic) unsigned long long cpsProductId;

- (id)initWithParams:(id)a0 extraData:(id)a1;
- (void).cxx_destruct;

@end
