@class NSDictionary, GCOpenReportParam;

@interface GameLifeTabBarConfig : NSObject

@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) BOOL isFromFindTab;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) GCOpenReportParam *reportParam;
@property (retain, nonatomic) NSDictionary *addtionUrlParams;
@property (copy, nonatomic) id /* block */ onCloseBlock;

- (void).cxx_destruct;

@end
