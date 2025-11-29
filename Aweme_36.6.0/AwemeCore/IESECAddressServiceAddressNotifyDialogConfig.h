@class NSArray, NSString;

@interface IESECAddressServiceAddressNotifyDialogConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statPeriod;
@property (nonatomic) long long maxTimes;
@property (nonatomic) long long checkDistance;
@property (nonatomic) BOOL disableCheck;
@property (copy, nonatomic) NSArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
