@class NSArray, NSString, MJCaptionEntryModel;

@interface MJCaptionGroupModel : NSObject <PBCoding>

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) MJCaptionEntryModel *originalCaptionEntry;
@property (retain, nonatomic) NSArray *translatedCaptionEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_originalCaptionEntry;
+ (void)PBArrayAdd_translatedCaptionEntries;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCaptionGroup:(id)a0;
- (id)toCaptionGroup;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
