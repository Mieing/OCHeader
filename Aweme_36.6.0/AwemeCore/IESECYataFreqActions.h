@class NSString, IESECYataFreqActionsRule;

@interface IESECYataFreqActions : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECYataFreqActionsRule *view;
@property (retain, nonatomic) IESECYataFreqActionsRule *click;
@property (retain, nonatomic) IESECYataFreqActionsRule *close;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clickJSONTransformer;
+ (id)viewJSONTransformer;
+ (id)closeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
