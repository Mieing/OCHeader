@class NSString, NSNumber, AWEAdVideoLiveHeadPendantQponInfo;

@interface AWEAdVideoLiveHeadPendant : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pendantText;
@property (copy, nonatomic) NSString *pendantIcon;
@property (copy, nonatomic) NSString *pendantBackground;
@property (retain, nonatomic) NSNumber *pendantShowSeconds;
@property (retain, nonatomic) AWEAdVideoLiveHeadPendantQponInfo *qponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
