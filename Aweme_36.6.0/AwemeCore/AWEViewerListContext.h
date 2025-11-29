@class NSArray, NSString, AWEAwemeModel;
@protocol AWEViewerListDataControllerProtocol;

@interface AWEViewerListContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEViewerListDataControllerProtocol> dataController;
@property (copy, nonatomic) NSArray *insertViewerIDs;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *previousMethod;
@property (nonatomic) BOOL shouldCreateNewDataController;

- (void).cxx_destruct;

@end
