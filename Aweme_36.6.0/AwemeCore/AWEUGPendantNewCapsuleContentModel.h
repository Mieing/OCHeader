@class AWEUGPendantNewCapsuleContentCountdown, AWEUGPendantNewCapsuleContentText, NSDictionary, NSString, AWEUGPendantNewCapsuleContentProgressBar;

@interface AWEUGPendantNewCapsuleContentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGPendantNewCapsuleContentText *defaultContent;
@property (retain, nonatomic) AWEUGPendantNewCapsuleContentProgressBar *progressBar;
@property (retain, nonatomic) AWEUGPendantNewCapsuleContentCountdown *countdown;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
