@class NSString, NSDictionary, AWEUserRelationContext, NSNumber;

@interface AWEUserButtonFollowContext : NSObject

@property (retain, nonatomic) AWEUserRelationContext *followContext;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (retain, nonatomic) NSNumber *followSceneID;
@property (retain, nonatomic) NSNumber *cancelFollowSceneID;
@property (nonatomic) BOOL enableShowErrorToast;
@property (nonatomic) BOOL enableDoubleCheckAlert;

- (void).cxx_destruct;

@end
