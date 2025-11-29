@class MMLiveBeautySuite, MMLiveTaskId;
@protocol MMLiveBeautyLogicProvider;

@interface MMLiveBeautyOperationPanelConfig : NSObject

@property (retain, nonatomic) id<MMLiveBeautyLogicProvider> beautyLogicProvider;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveBeautySuite *suite;

+ (id)config;

- (void).cxx_destruct;

@end
