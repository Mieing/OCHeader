@class NSArray;
@protocol AWEModernFeedCellControllerProtocol, AWEGeneralDynamicCellControllerProtocol;

@interface AWEEnterVideoFeedCommonParams : NSObject

@property (nonatomic) long long videoFeedIndex;
@property (retain, nonatomic) NSArray *videoFeedAwemeArray;
@property (retain, nonatomic) id contexProvider;
@property (retain, nonatomic) id<AWEModernFeedCellControllerProtocol, AWEGeneralDynamicCellControllerProtocol> generalLynxCellController;
@property (copy, nonatomic) id /* block */ searchvideoWatchedMonitorBlock;
@property (retain, nonatomic) NSArray *idList;

- (id)initWithIndex:(long long)a0 AndAwemeArray:(id)a1;
- (void).cxx_destruct;

@end
