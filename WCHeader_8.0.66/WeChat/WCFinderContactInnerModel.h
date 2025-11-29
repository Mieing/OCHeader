@class FinderIdentityInfo, NSString, WCFinderContactFansInteractionData;

@interface WCFinderContactInnerModel : NSObject <WCTColumnCoding, PBCoding>

@property (retain, nonatomic) FinderIdentityInfo *userInfo;
@property (retain, nonatomic) WCFinderContactFansInteractionData *fansInteractionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userInfo;
+ (void)PBArrayAdd_fansInteractionData;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
