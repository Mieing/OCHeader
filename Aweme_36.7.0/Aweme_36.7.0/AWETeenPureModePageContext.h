@class NSString, NSDictionary, AWEAwemeModel;

@interface AWETeenPureModePageContext : AWEPageContext

@property (nonatomic) long long playProgressThreshold;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long vcType;

- (BOOL)canShowSpeedControl;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canShowProgress;

@end
