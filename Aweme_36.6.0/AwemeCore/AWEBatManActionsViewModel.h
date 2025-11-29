@class NSArray;
@protocol AWEBatManManagerProtocol;

@interface AWEBatManActionsViewModel : NSObject

@property (retain, nonatomic) NSArray *actionsArray;
@property (nonatomic) BOOL isShowMoreGame;
@property (weak, nonatomic) id<AWEBatManManagerProtocol> delegate;

- (id)userGuideArray;
- (id)constructActionsArray;
- (id)actionsTypeArray;
- (void).cxx_destruct;
- (id)init;

@end
