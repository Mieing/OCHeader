@class NSString, NSArray, NSDictionary;

@interface IESLiveAioLinkTabItem : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) int type;
@property (nonatomic) BOOL redDot;
@property (nonatomic) BOOL hasNewGift;
@property (copy, nonatomic) NSArray *scrollPageInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
