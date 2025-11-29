@class NSString;

@interface MJCaptionModelItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_text;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_duration;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithText:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithCaptionItem:(id)a0;
- (id)toCaptionItem;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
