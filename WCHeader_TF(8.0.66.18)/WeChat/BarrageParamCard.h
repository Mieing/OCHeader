@class NSString;

@interface BarrageParamCard : NSObject

@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) NSString *cardTitle;
@property (nonatomic) double paramValue;
@property (nonatomic) BOOL isSelect;

- (void).cxx_destruct;

@end
