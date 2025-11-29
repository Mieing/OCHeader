@class NSDictionary, NSString, NSNumber;

@interface IESECLiveGoodsAuctionUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *userPic;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *userID;
@property (nonatomic) BOOL isSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
