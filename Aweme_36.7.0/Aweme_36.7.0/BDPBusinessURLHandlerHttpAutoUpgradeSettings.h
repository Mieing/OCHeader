@class NSArray;

@interface BDPBusinessURLHandlerHttpAutoUpgradeSettings : NSObject

@property (nonatomic) BOOL enableAutoGrade;
@property (retain, nonatomic) NSArray *shouldDisableList;
@property (retain, nonatomic) NSArray *shouldEnableList;
@property (retain, nonatomic) NSArray *shouldDisableSceneList;
@property (nonatomic) double timeout;

- (void).cxx_destruct;

@end
