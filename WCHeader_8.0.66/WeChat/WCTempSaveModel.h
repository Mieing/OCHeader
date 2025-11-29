@class SightDraft, NSString, NSArray, WCLocationInfo, NSDate, WCTimelineExtBean;

@interface WCTempSaveModel : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *imageArray;
@property (retain, nonatomic) SightDraft *sightDraft;
@property (retain, nonatomic) NSDate *lastSaveDate;
@property (nonatomic) long long lastPrivacy;
@property (retain, nonatomic) WCLocationInfo *poiInfo;
@property (nonatomic) BOOL isDynamicTagEnabled;
@property (retain, nonatomic) NSArray *tempSelectContacts;
@property (retain, nonatomic) NSArray *remindContactUsernames;
@property (retain, nonatomic) NSArray *lastPostVisibleLabelNames;
@property (retain, nonatomic) NSArray *lastPostInVisibleLabelNames;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long pasteLength;
@property (retain, nonatomic) WCTimelineExtBean *extBean;
@property (retain, nonatomic) NSString *postCycleId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
