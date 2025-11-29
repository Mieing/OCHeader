@class NSNumber, NSArray, NSString;

@interface IESLiveEcOpenVideoPostEditerCommentInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *anonymous;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *enterType;
@property (retain, nonatomic) NSNumber *rankLogistic;
@property (retain, nonatomic) NSNumber *rankShop;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
