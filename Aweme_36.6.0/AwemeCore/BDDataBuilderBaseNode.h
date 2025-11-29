@class NSMutableArray, BDDataBuilderDataInfo, BDDataBuilderBasicOperator, NSString, BDDataBuilderOperationInfo, BDDataBuilderInternal;

@interface BDDataBuilderBaseNode : NSObject <BDDataBuilderOperatorDelegate>

@property (retain, nonatomic) BDDataBuilderBasicOperator *basicOperator;
@property (weak, nonatomic) BDDataBuilderInternal *builder;
@property (weak, nonatomic) BDDataBuilderBaseNode *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) BDDataBuilderOperationInfo *operationInfo;
@property (retain, nonatomic) BDDataBuilderDataInfo *dataInfo;
@property (readonly, copy, nonatomic) id /* block */ removeValue;
@property (readonly, copy, nonatomic) id /* block */ isExist;
@property (readonly, copy, nonatomic) id /* block */ ifExist;
@property (readonly, copy, nonatomic) id /* block */ ifNotExist;
@property (readonly, copy, nonatomic) id /* block */ build;
@property (readonly, copy, nonatomic) id /* block */ buildUrlStr;
@property (readonly, copy, nonatomic) id /* block */ buildJsonStr;
@property (readonly, copy, nonatomic) id /* block */ buildDict;
@property (readonly, copy, nonatomic) id /* block */ captureError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createRootNodeWithSourceData:(id)a0 type:(unsigned long long)a1;
+ (id)createChildNodeWithParent:(id)a0 operationInfo:(id)a1;

- (id)getParentNodeOutputData;
- (BOOL)executeOperationWithInfo:(id)a0 isForward:(BOOL)a1 error:(id *)a2;
- (unsigned long long)getParentPathExistState;
- (void)updateParentNodeOutputData:(id)a0;
- (void)setBuildError:(id)a0;
- (BOOL)checkExistCondition;
- (unsigned long long)getParentPathExistRequire;
- (void)onTraverseForwardWithError:(id *)a0;
- (void)onTraverseBackwardWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;
- (void)addChildNode:(id)a0;

@end
