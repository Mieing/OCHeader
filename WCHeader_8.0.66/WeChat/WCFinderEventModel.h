@class NSDate, NSString, NSArray, WCFinderContact, FinderJumpInfo, FinderEventWordingInfo, FinderEventMusicInfo, FinderEventDescriptionContact;

@interface WCFinderEventModel : NSObject <PBCoding, WCTColumnCoding, NSCopying>

@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int availableFlag;
@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *creatorNickname;
@property (nonatomic) unsigned long long hiddenMark;
@property (retain, nonatomic) WCFinderContact *contact;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventDescription;
@property (nonatomic) unsigned int participantCount;
@property (copy, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) unsigned int feedCount;
@property (nonatomic) unsigned int maxTopCount;
@property (nonatomic) BOOL closed;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL hadPosted;
@property (retain, nonatomic) FinderEventWordingInfo *wordingInfo;
@property (retain, nonatomic) FinderJumpInfo *descriptionJumpInfo;
@property (retain, nonatomic) FinderEventDescriptionContact *descContactInfo;
@property (retain, nonatomic) NSArray *postJumpList;
@property (copy, nonatomic) NSString *postWording;
@property (retain, nonatomic) FinderEventMusicInfo *musicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_eventTopicId;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventDescription;
+ (void)PBArrayAdd_participantCount;
+ (void)PBArrayAdd_coverImgUrl;
+ (void)PBArrayAdd_fromObjectId;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_maxTopCount;
+ (void)PBArrayAdd_closed;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_availableFlag;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_hiddenMark;
+ (void)PBArrayAdd_descContactInfo;
+ (void)PBArrayAdd_descriptionJumpInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (id)fromPBEvent:(id)a0;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEvent:(id)a0;
- (id)convertEventInfo;
- (id)bindEventInfo;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
