@class NSArray, NSMutableDictionary, MMTimer, NSString;

@interface WCStoryTimelineDataVM : NSObject <IWCMyStoryUserStateUtilExt>

@property (copy, nonatomic) NSArray *allContactArray;
@property (retain, nonatomic) NSMutableDictionary *userContactDict;
@property (retain, nonatomic) NSMutableDictionary *chatRoomMyContactHasStoryDict;
@property (retain, nonatomic) NSArray *unreadContactUserNameArray;
@property (copy, nonatomic) NSArray *timestampUnreadNameArray;
@property (copy, nonatomic) NSArray *timestampReadNameArray;
@property (retain, nonatomic) MMTimer *reloadNotifyThrottle;
@property (nonatomic) BOOL hasReloadDataItem;
@property (nonatomic) unsigned long long lastReadMaxTid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timelineStoryDataVM;

- (id)initDataWithContactArray:(id)a0;
- (unsigned long long)getTimeStampUnreadStoryCount;
- (id)getTimelineDataUnit;
- (id)getMessageCellModelForUnitArray:(id)a0;
- (id)getTimelineCellModelForUnitArray:(id)a0;
- (id)getTimelineShowUnreadStoryUnitArray;
- (id)createTimelineShowUnreadUnitArrayWithUserDataDict:(id)a0;
- (id)createDataUnitWithContact:(id)a0 dataItemArray:(id)a1;
- (id)getAllUnreadCommentMessage;
- (void)reloadDataItem:(id)a0 unreadMessageUnitArray:(id)a1;
- (void)onClearUnreadStoryMarkWithUserName:(id)a0;
- (void).cxx_destruct;

@end
