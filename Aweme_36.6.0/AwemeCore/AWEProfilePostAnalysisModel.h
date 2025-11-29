@class NSArray, NSString, AWEPageContext, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEProfilePostAnalysisModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) NSArray *itemModels;
@property (nonatomic) unsigned long long selectedTabType;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;

@end
