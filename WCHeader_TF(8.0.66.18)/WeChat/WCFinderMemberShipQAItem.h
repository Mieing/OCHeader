@class NSString, WCFinderDataItem, NSMutableArray;

@interface WCFinderMemberShipQAItem : NSObject <PBCoding>

@property (nonatomic) unsigned long long qaType;
@property (copy, nonatomic) NSString *refAnswerContent;
@property (retain, nonatomic) WCFinderDataItem *refAnswerObject;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_qaType;
+ (void)PBArrayAdd_refAnswerContent;
+ (void)PBArrayAdd_refAnswerObject;
+ (void)PBArrayAdd_likeList;
+ (void)initialize;
+ (id)convertFromFinderMemberQAVO:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
