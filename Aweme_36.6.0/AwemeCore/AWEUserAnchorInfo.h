@class NSString;

@interface AWEUserAnchorInfo : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL masterSwitch;
@property (readonly, nonatomic) BOOL profileSwitch;
@property (readonly, copy, nonatomic) NSString *timeText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithMasterSwitch:(BOOL)a0 profileSwitch:(BOOL)a1 timeText:(id)a2;
- (void).cxx_destruct;

@end
