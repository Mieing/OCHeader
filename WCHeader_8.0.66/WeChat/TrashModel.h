@class SightDraft, NSString, NSArray, WCLocationInfo, WCDataItem, WCTimelineExtBean;

@interface TrashModel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *svrId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *draftID;
@property (nonatomic) unsigned long long draftType;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int dataItemCreateTime;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *imageArray;
@property (retain, nonatomic) SightDraft *sightDraft;
@property (nonatomic) long long lastPrivacy;
@property (retain, nonatomic) WCLocationInfo *poiInfo;
@property (retain, nonatomic) NSArray *tempSelectContacts;
@property (retain, nonatomic) NSArray *remindContactUsernames;
@property (retain, nonatomic) NSArray *lastPostVisibleLabelNames;
@property (retain, nonatomic) NSArray *lastPostInVisibleLabelNames;
@property (nonatomic) unsigned long long pasteLength;
@property (nonatomic) BOOL isDynamicTagEnabled;
@property (retain, nonatomic) WCDataItem *forwardItem;
@property (nonatomic) BOOL canReEdit;
@property (nonatomic) unsigned int likeCnt;
@property (nonatomic) unsigned int commentCnt;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WCTimelineExtBean *extBean;

+ (id)fromBuffer:(id)a0;
+ (id)getSaveRootDir;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getSavePath;
- (void)archiveToFile;
- (BOOL)isDisplayExpired;
- (BOOL)isRecyclableExpired;
- (id)debugDescription;
- (void).cxx_destruct;

@end
