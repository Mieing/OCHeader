@class TIMXUIInfoWrapper, NSString, TIMXPBNImActionInfo, NSDictionary, TIMXImDynamicPatchModelWrapper;
@protocol TIMXImDynamicPatchProtocol;

@interface TIMXImActionInfoWrapper : NSObject <TIMXImActionInfoProtocol>

@property (retain, nonatomic) TIMXPBNImActionInfo *pbActionInfo;
@property (retain, nonatomic) TIMXImDynamicPatchModelWrapper *imDynamicPatchModel;
@property (retain, nonatomic) TIMXUIInfoWrapper *uiInfo;
@property (nonatomic) int actionInfoType;
@property (copy, nonatomic) NSString *actionContent;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int platform;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) NSDictionary *extData;
@property (readonly, nonatomic) BOOL isV2;
@property (readonly, nonatomic) id<TIMXImDynamicPatchProtocol> dynamicPatchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWihtPBObj:(id)a0;
- (void).cxx_destruct;

@end
