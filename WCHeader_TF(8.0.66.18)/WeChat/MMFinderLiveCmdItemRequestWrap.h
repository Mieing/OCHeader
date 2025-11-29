@class FinderCmdItem, FinderCmdRet;

@interface MMFinderLiveCmdItemRequestWrap : NSObject

@property (retain, nonatomic) FinderCmdItem *cmdItem;
@property (retain, nonatomic) FinderCmdRet *cmdRet;
@property (copy, nonatomic) id /* block */ completeCallBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (void).cxx_destruct;

@end
