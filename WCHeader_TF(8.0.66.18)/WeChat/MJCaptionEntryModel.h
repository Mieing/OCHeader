@class NSString, NSArray;

@interface MJCaptionEntryModel : NSObject <PBCoding>

@property (retain, nonatomic) NSString *launguage;
@property (retain, nonatomic) NSArray *captionItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_launguage;
+ (void)PBArrayAdd_captionItems;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCaptionEntry:(id)a0;
- (id)toCaptionEntry;
- (void).cxx_destruct;

@end
