@class NSString, NLEModel_OC;

@interface NLEEditorCommitContext : NSObject <NLEEditorCommitContextProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NLEModel_OC *curModel;
@property (retain, nonatomic) NLEModel_OC *preModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
