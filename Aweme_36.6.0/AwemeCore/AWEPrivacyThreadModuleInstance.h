@class NSArray, AWEPrivacyThreadInfoList, AWEPrivacyThreadModuleUtil;

@interface AWEPrivacyThreadModuleInstance : NSObject

@property (retain, nonatomic) NSArray *instanceArray;
@property (retain, nonatomic) AWEPrivacyThreadInfoList *infoList;
@property (retain, nonatomic) AWEPrivacyThreadModuleUtil *util;

- (void)willDispatch;
- (void)didEndDispatch;
- (void)actionBeforeBlockInvoke;
- (void)actionAfterBlockInvoked;
- (id)getAspectorInfo:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
