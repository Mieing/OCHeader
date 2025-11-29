@class NSString;

@interface IESLiveInteractEmojiImage : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSString *uri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
