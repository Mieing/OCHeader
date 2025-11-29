@class NSArray;
@protocol BDUGLuckyActivityEventConfig;

@interface BDUGLuckyActivityFullRoadConfig : BDUGLuckyJSONModel

@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) NSArray *globalTaskIdList;
@property (copy, nonatomic) NSArray<BDUGLuckyActivityEventConfig> *eventConfig;
@property (nonatomic) BOOL canUseHostHook;

- (void).cxx_destruct;

@end
