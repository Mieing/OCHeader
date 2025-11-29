@class NSString;

@interface DeviceRankItem : MMObject

@property (retain, nonatomic) NSString *nsRankId;
@property (retain, nonatomic) NSString *nsRankTitle;
@property (nonatomic) unsigned int uiRankNum;

- (void).cxx_destruct;

@end
