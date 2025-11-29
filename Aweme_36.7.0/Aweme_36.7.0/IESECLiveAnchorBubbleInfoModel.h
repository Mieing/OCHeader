@class NSArray, NSString;

@interface IESECLiveAnchorBubbleInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *bubbleItemArray;
@property (copy, nonatomic) NSString *multiBubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleItemArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
