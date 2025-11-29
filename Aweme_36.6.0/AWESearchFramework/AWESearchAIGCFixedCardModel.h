@class NSString;

@interface AWESearchAIGCFixedCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double totalHeight;
@property (nonatomic) double lastHeight;
@property (retain, nonatomic) NSString *searchId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
