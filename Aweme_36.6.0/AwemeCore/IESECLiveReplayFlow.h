@class NSString, NSArray, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveReplayFlow : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *text;
@property (retain, nonatomic) IESECLiveImageURLModel *pic;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSNumber *isUserShop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)picJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
