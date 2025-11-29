@class NSArray;

@interface BDPBusinessURLHandlerHttpInterceptSettings : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *shouldDisableList;
@property (retain, nonatomic) NSArray *shouldEnableList;
@property (retain, nonatomic) NSArray *shouldDisableSceneList;

- (void).cxx_destruct;

@end
