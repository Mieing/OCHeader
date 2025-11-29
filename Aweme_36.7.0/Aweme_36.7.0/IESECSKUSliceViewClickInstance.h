@class NSString, NSDictionary;
@protocol YataInstanceInterface;

@interface IESECSKUSliceViewClickInstance : NSObject

@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) NSString *renderKey;
@property (retain, nonatomic) NSDictionary *triggerParams;
@property (nonatomic) double userClickTimeStamp;

- (void).cxx_destruct;

@end
