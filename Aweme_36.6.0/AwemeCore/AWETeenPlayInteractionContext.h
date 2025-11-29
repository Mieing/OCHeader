@class NSString, AWETeenExtraParamModel, AWEAwemeModel;

@interface AWETeenPlayInteractionContext : AWEPageContext

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (nonatomic) long long vcType;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
