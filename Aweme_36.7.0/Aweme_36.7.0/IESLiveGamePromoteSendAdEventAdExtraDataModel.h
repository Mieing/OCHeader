@class NSString, NSNumber;

@interface IESLiveGamePromoteSendAdEventAdExtraDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSNumber *gameStatus;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
