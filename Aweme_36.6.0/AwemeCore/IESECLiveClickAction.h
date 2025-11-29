@class NSString, NSDictionary, IESECBTMModel;

@interface IESECLiveClickAction : NSObject

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL showDisclaimer;
@property (copy, nonatomic) NSString *clickArea;
@property (copy, nonatomic) id /* block */ willExecute;
@property (copy, nonatomic) id /* block */ didExecute;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECBTMModel *btmModel;

- (void).cxx_destruct;

@end
