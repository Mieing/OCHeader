@class NSString, NSNumber;

@interface IESECGoodsAuctionHistoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *userAvatarURL;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *recordTime;
@property (copy, nonatomic) NSString *statusText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
