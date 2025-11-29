@class NSNumber;

@interface IESLiveTryOpenInvitePanelResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
