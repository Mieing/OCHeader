@class NSString;
@protocol AWEIMMultiTargetAdapter;

@interface IESIMMessageTabExtraComponentConfig : NSObject <IESIMMessageTabExtraComponentConfig>

@property (retain, nonatomic) id<AWEIMMultiTargetAdapter> multiTargetAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)modifyHomePageComponentList:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
