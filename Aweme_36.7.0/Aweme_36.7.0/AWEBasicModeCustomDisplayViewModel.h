@class AWEAwemeModel;

@interface AWEBasicModeCustomDisplayViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (nonatomic) long long indexPath;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) double bottomMargin;

- (void).cxx_destruct;

@end
