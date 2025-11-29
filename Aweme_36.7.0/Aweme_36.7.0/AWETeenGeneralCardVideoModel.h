@class NSString, AWETeenExtraParamModel, AWEAwemeModel;

@interface AWETeenGeneralCardVideoModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long vcType;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *albumEnterFrom;

- (void).cxx_destruct;

@end
