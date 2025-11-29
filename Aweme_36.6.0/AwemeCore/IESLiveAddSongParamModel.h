@class NSString, NSNumber;

@interface IESLiveAddSongParamModel : IESLiveBridgeModel

@property (retain, nonatomic) id song;
@property (copy, nonatomic) NSString *fromRequestType;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *queryUserId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *requestMode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
