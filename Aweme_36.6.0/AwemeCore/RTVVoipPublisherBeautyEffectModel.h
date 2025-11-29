@class NSArray, IESEffectModel, NSString;

@interface RTVVoipPublisherBeautyEffectModel : NSObject <RTVVoipPublisherBeautyEffectModelInterface>

@property (retain, nonatomic) IESEffectModel *effect;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
