@class NSString;

@interface IESLiveOpenVSMessageBoardInputPanelDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *badgeId;
@property (copy, nonatomic) NSString *skinId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
