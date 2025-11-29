@class NSString, AWEDislikeEntity, AWEURLModel;

@interface AWEDislikeRealDimension : AWEBaseApiModel

@property (nonatomic) long long dimensionID;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEDislikeEntity *entity;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;

@end
