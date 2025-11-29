@class NSString;
@protocol YataRenderObjectInterface;

@interface IESECOrderScrollEvent : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long contentOffset;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) long long repeatTimes;
@property (retain, nonatomic) id<YataRenderObjectInterface> node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
