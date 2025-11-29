@class AWECodeGenPostReachModuleModel, NSString, NSDictionary, NSNumber, AWECreatorDiagnoseModel;

@interface AWEUserPostsWeakRefreshModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *diggCount;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) AWECreatorDiagnoseModel *creatorDiagnoseModel;
@property (retain, nonatomic) AWECodeGenPostReachModuleModel *postReachModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)postReachModuleJSONAdapter;
+ (id)creatorDiagnoseModelJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
