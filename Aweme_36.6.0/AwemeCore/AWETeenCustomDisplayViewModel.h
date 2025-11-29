@class NSString, AWETeenFeedPageContext, AWETeenExtraParamModel, AWEAwemeModel, NSNumber;
@protocol AWETeenCustomDisplayViewControllerDelegate;

@interface AWETeenCustomDisplayViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) id<AWETeenCustomDisplayViewControllerDelegate> feedContainerDelegate;
@property (nonatomic) long long vcType;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (retain, nonatomic) NSNumber *slideType;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) BOOL isPreloadingEnabled;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double startPlayTime;
@property (copy, nonatomic) NSString *startPlayToast;
@property (copy, nonatomic) NSString *resultID;
@property (copy, nonatomic) NSString *entranceSource;
@property (weak, nonatomic) AWETeenFeedPageContext *feedPageContext;

- (void).cxx_destruct;

@end
