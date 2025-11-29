@class NSString, NSArray;

@interface IESIMRecentDeleteCellViewModel : NSObject

@property (nonatomic) BOOL checked;
@property (nonatomic) unsigned long long conType;
@property (nonatomic) long long messageCount;
@property (nonatomic) long long remainDays;
@property (nonatomic) long long conShortID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *avatarUrlList;

+ (double)cellHeight;

- (void)fetchLiveCustomInfoWithCon:(id)a0 completion:(id /* block */)a1;
- (void)fetchUIDataIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;

@end
