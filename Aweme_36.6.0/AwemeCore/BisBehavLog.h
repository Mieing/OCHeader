@class BisClientInfo, BisBehavCommon, NSMutableArray, BisBehavToken;

@interface BisBehavLog : NSObject

@property (retain, nonatomic) BisClientInfo *clientInfo;
@property (retain, nonatomic) BisBehavToken *behavToken;
@property (retain, nonatomic) BisBehavCommon *behavCommon;
@property (retain, nonatomic) NSMutableArray *behavTask;

- (void).cxx_destruct;

@end
