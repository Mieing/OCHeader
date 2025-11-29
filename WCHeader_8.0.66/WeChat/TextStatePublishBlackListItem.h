@class NSString, NSArray;

@interface TextStatePublishBlackListItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) long long privacy;
@property (retain, nonatomic) NSArray *labelList;
@property (retain, nonatomic) NSArray *contactNameList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_labelList;
+ (void)PBArrayAdd_contactNameList;
+ (void)initialize;
+ (id)contactNameListFromContactList:(id)a0;
+ (id)contactListFromContactNameList:(id)a0;

@end
