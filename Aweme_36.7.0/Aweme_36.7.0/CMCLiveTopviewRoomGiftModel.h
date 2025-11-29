@class NSString, AWEURLModel;

@interface CMCLiveTopviewRoomGiftModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long giftID;
@property (copy, nonatomic) NSString *giftDescription;
@property (retain, nonatomic) AWEURLModel *giftIconModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)giftIconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
