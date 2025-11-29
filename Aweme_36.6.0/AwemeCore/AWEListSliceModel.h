@class NSError, AWEBaseApiModel;

@interface AWEListSliceModel : NSObject

@property (retain, nonatomic) AWEBaseApiModel *model;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long parseDuration;

- (void).cxx_destruct;

@end
