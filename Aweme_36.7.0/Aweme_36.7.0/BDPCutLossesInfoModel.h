@class NSString;

@interface BDPCutLossesInfoModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long timing;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long reduplicationStrategy;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *pushSource;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *issueID;
@property (copy, nonatomic) NSString *strategyID;

- (void).cxx_destruct;

@end
