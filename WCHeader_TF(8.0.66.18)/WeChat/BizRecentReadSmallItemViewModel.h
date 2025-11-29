@class NSString;

@interface BizRecentReadSmallItemViewModel : BizRecentReadBaseViewModel

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *bizUin;
@property (nonatomic) unsigned int appMsgId;
@property (nonatomic) unsigned int itemId;

- (void)updateViewModel:(id)a0;
- (id)identifier;
- (void).cxx_destruct;

@end
