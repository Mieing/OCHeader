@class NSString, NSArray;

@interface ACCLVTemplateFragment : NSObject <LVTemplateFragment>

@property (copy, nonatomic) NSString *payloadID;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (copy, nonatomic) NSArray *cropPoints;
@property (nonatomic) struct CGSize { double width; double height; } videoSzie;
@property (copy, nonatomic) NSString *nleSlotID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
