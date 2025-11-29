@class NSString;

@interface AWEIMStrangerQuickReceiveMsgViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long itemType;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) long long closeDay;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)trackStatusString;
- (void).cxx_destruct;
- (id)tipTitle;
- (id)requestParams;
- (id)initWithItemType:(long long)a0;

@end
