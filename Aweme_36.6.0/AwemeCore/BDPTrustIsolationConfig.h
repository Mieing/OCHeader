@class NSString, NSArray, NSNumber;

@interface BDPTrustIsolationConfig : BDPBasePluginModel

@property (copy, nonatomic) NSString *pageCode;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *enableValue;
@property (copy, nonatomic) NSArray *titleKeyWords;
@property (retain, nonatomic) NSNumber *included;

- (id)textConfig;
- (void).cxx_destruct;

@end
