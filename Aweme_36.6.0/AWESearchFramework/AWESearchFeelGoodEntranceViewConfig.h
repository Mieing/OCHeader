@class AWESearchFeelGoodDataModel;

@interface AWESearchFeelGoodEntranceViewConfig : NSObject

@property (nonatomic) unsigned long long entranceType;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ clickContentBlock;
@property (copy, nonatomic) id /* block */ submitActionBlock;
@property (copy, nonatomic) id /* block */ animationEndBlock;
@property (retain, nonatomic) AWESearchFeelGoodDataModel *dataModel;
@property (nonatomic) BOOL isOnlySupportLightMode;

- (void).cxx_destruct;

@end
