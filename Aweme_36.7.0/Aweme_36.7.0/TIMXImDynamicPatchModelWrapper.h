@class TIMXPBNImDynamicPatch, NSString;

@interface TIMXImDynamicPatchModelWrapper : NSObject <TIMXImDynamicPatchProtocol>

@property (retain, nonatomic) TIMXPBNImDynamicPatch *pbDynamicPatch;
@property (readonly, copy, nonatomic) NSString *cardID;
@property (readonly, copy, nonatomic) NSString *rawData;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) long long defaultHeight;
@property (readonly, nonatomic) long long defaultWidth;
@property (readonly, copy, nonatomic) NSString *cardType;
@property (readonly, copy, nonatomic) NSString *cardKey;
@property (readonly, copy, nonatomic) NSString *sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPBObj:(id)a0;
- (void).cxx_destruct;

@end
