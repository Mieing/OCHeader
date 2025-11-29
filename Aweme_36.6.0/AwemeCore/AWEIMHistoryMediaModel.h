@class AWEIMMessage, NSString, AWEAwemeModel;

@interface AWEIMHistoryMediaModel : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL needShowDate;
@property (nonatomic) unsigned long long fetchState;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isUnavaliable;
@property (nonatomic) int likeCount;

- (void).cxx_destruct;

@end
