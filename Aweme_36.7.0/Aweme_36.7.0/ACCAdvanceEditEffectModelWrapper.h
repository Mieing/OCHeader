@class NSString, IESEffectModel;

@interface ACCAdvanceEditEffectModelWrapper : NSObject <ACCAdvanceEditResourceInfoProtocol>

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *resourceID;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
