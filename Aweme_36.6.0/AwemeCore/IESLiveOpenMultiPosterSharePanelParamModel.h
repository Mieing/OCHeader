@class NSArray, NSString;

@interface IESLiveOpenMultiPosterSharePanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *sharePosterList;
@property (nonatomic) BOOL addRoomInfo;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *logReflowExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
