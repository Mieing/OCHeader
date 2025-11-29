@class NSString, COpenIMCustomToolBarItem;

@interface WWKFReportFlowActionExtInfo : MMObject

@property (nonatomic) long long shareScene;
@property (copy, nonatomic) NSString *shareToUser;
@property (copy, nonatomic) NSString *finderUserName;
@property (copy, nonatomic) COpenIMCustomToolBarItem *customToolBarItem;
@property (copy, nonatomic) NSString *chatSessionId;

- (void).cxx_destruct;

@end
