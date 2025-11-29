@class NSArray, NSString;

@interface RTVVoipRingtoneDetailListsResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *detailList;
@property (copy, nonatomic) NSArray *failedList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicList;
- (void).cxx_destruct;

@end
