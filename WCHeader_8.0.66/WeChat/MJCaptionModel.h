@class NSArray, NSString;

@interface MJCaptionModel : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *captionGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_captionGroups;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCaptionGroups:(id)a0;
- (id)toCaptionGroups;
- (void).cxx_destruct;

@end
