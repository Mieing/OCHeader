@class NSString, NSMutableSet, NSMutableDictionary;

@interface MagicBrushConstants : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *bizNameList;
@property (retain, nonatomic) NSMutableSet *publicServiceList;
@property (retain, nonatomic) NSMutableSet *bizNameWithPublicServiceList;
@property (retain, nonatomic) NSMutableSet *bizUseBootsNameList;
@property (retain, nonatomic) NSMutableSet *bizUseSCLNameList;
@property (retain, nonatomic) NSMutableSet *bizUseADPSNameList;
@property (retain, nonatomic) NSMutableSet *bizUseFeedBackNameList;
@property (retain, nonatomic) NSMutableSet *bizSupportFrameSetCoverList;
@property (retain, nonatomic) NSMutableDictionary *bizNameToProjectDic;
@property (retain, nonatomic) NSMutableDictionary *projectToBizNameDic;
@property (retain, nonatomic) NSMutableDictionary *allUDRExpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (id)getBizNameSet;
- (id)getPublicServiceSet;
- (id)getBizNameWithPublicServiceSet;
- (id)getUseBootsSet;
- (id)getUseSCLSet;
- (id)getUseADPSSet;
- (id)getUseFeedBackSet;
- (id)getSupportFrameSetCoverSet;
- (id)getPublicServiceSet:(id)a0;
- (id)setUDRExpt;
- (BOOL)getExptFromBizName:(id)a0;
- (id)getProjectIdFromBizName:(id)a0;
- (id)getBizNameFromProjectId:(id)a0;
- (BOOL)getCoverABTest:(id)a0;
- (void).cxx_destruct;

@end
