@class NSString, NSNumber;

@interface IESLiveLGameBeforeLiveModel : NSObject

@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameDescription;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameType;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskSource;
@property (retain, nonatomic) NSNumber *bidType;

- (void).cxx_destruct;

@end
