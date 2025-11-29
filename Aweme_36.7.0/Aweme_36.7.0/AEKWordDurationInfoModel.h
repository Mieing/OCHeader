@class NSString;

@interface AEKWordDurationInfoModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic, getter=isKeyword) BOOL keyword;

- (id)aek_captionItem;
- (void).cxx_destruct;
- (id)debugDescription;

@end
