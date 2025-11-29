@class NSString, NSMutableArray, CContact;

@interface WCStoryDataUnit : NSObject

@property (retain, nonatomic) NSMutableArray *storyDataItemArray;
@property (nonatomic) unsigned long long storyDataItemCount;
@property (retain, nonatomic) CContact *userContact;
@property (nonatomic) BOOL hasUnreadStory;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *dateKey;
@property (retain, nonatomic) NSMutableArray *arrTid;
@property (nonatomic) BOOL chatRoomSyncChange;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *unitIdentifier;
@property (readonly, nonatomic) NSString *unitLogIdentifier;
@property (nonatomic) long long cornerCount;

+ (id)storyDataUnitWithContact:(id)a0 dataCount:(unsigned long long)a1 storyDataItemArray:(id)a2;
+ (id)historyDataUnitWithDateKey:(id)a0 dataCount:(unsigned long long)a1 dataItemArray:(id)a2;

- (BOOL)needReloadData;
- (long long)indexForItemWithTid:(id)a0;
- (int)lastCreateTime;
- (int)lastModifyTime;
- (id)lastDataItemTid;
- (void).cxx_destruct;

@end
