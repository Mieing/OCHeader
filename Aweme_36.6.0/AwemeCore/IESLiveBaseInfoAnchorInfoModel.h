@class NSString, NSNumber;

@interface IESLiveBaseInfoAnchorInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (retain, nonatomic) NSNumber *anchorLevel;
@property (copy, nonatomic) NSString *anchorType;
@property (copy, nonatomic) NSString *displayId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
