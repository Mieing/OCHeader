@class AWEPlayletSchemaModel, NSDictionary, AWEAwemeModel, NSObject, AWEPlayletInfoModel;
@protocol AWEAwemeNewDetailTableContextProtocol, AWEShowQuickAccessEntryProtocol;

@interface AWEShowQuickAccessEntryContext : NSObject

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) NSObject<AWEAwemeNewDetailTableContextProtocol> *containerContext;
@property (weak, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (readonly, weak, nonatomic) AWEPlayletInfoModel *playletInfo;
@property (retain, nonatomic) id<AWEShowQuickAccessEntryProtocol> lastEntry;
@property (copy, nonatomic) id /* block */ willDisplayEntryAnimation;
@property (copy, nonatomic) id /* block */ displayEntryAnimation;
@property (copy, nonatomic) id /* block */ removeEntryAnimation;

- (void).cxx_destruct;

@end
