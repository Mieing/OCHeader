@class NSString, NSNumber;

@interface IESECLiveAnchorBubbleItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *maxShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
