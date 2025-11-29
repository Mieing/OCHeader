@class NSString, AWEHPChannelBubbleModel;

@interface AWEHPBubbleCallContext : AWEHPComponentBaseCallContext <AWEHPBubbleCallContextProtocol>

@property (copy, nonatomic) AWEHPChannelBubbleModel *bubleModel;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (readonly, copy, nonatomic) NSString *componentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
