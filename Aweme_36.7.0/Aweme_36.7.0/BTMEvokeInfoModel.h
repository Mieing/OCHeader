@class NSDictionary, BTMPage;

@interface BTMEvokeInfoModel : NSObject

@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) NSDictionary *info;
@property (weak, nonatomic) BTMPage *currentItem;
@property (readonly, nonatomic) NSDictionary *reportDict;

- (id)flowBtmInfo;
- (void).cxx_destruct;

@end
