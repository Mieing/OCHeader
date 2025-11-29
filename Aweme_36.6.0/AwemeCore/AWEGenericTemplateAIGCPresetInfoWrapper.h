@class NSArray, NPPreprocessAIGCCallback_OC, NPAIGCRequestInfo_OC;

@interface AWEGenericTemplateAIGCPresetInfoWrapper : NSObject

@property (retain, nonatomic) NPAIGCRequestInfo_OC *requestInfo;
@property (retain, nonatomic) NSArray *aigcSlotInfos;
@property (retain, nonatomic) NPPreprocessAIGCCallback_OC *callback;
@property (retain, nonatomic) NSArray *aigcResultList;

- (void).cxx_destruct;

@end
