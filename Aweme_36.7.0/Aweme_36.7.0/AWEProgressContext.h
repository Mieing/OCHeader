@class AWEProgressConfigs, NSString, NSDictionary, AWEAwemeModel, AWEPageContext, UISlider;

@interface AWEProgressContext : AWEPageContext <AWEProgressContextProtocol>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEProgressConfigs *configs;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWEPageContext *outerContext;
@property (weak, nonatomic) UISlider *progressSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
