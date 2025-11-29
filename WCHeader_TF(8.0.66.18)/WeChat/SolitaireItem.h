@class NSString;

@interface SolitaireItem : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *nsSeparator;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) BOOL isHeader;
@property (nonatomic) BOOL isExample;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) long long itemNum;
@property (nonatomic) unsigned int msgCreateTime;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_isHeader;
+ (void)PBArrayAdd_isExample;
+ (void)PBArrayAdd_canEdit;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_itemNum;
+ (void)initialize;

@end
