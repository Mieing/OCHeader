@class NSString, NSNumber;

@interface LinkWeAppJumpInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSNumber *appState;
@property (retain, nonatomic) NSNumber *isForbidSSignal;
@property (copy, nonatomic) NSString *shareKey;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *sceneNote;

+ (id)makeWithAppId:(id)a0 pagePath:(id)a1 appState:(id)a2 isForbidSSignal:(id)a3 shareKey:(id)a4 scene:(id)a5 sceneNote:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
