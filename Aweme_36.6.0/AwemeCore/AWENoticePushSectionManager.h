@class NSString, NSMutableArray;

@interface AWENoticePushSectionManager : NSObject

@property (copy, nonatomic) NSString *inAppPushType;
@property (retain, nonatomic) NSMutableArray *polymericMessagesFromLongConnection;
@property (retain, nonatomic) NSMutableArray *polymericMessagesForDeactivePeriod;

+ (id)managerWithInappPushType:(id)a0;

- (void)clearDeactivePeriod;
- (void).cxx_destruct;
- (void)clear;
- (id)viewModel;
- (BOOL)hasNotice;

@end
