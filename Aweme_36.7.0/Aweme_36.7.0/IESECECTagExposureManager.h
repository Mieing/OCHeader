@class NSTimer, NSHashTable;

@interface IESECECTagExposureManager : NSObject

@property (retain, nonatomic) NSTimer *exposureTimer;
@property (retain, nonatomic) NSHashTable *exposureTags;

+ (id)shared;

- (id)init_private;
- (void)addTagView:(id)a0;
- (void)timeIsUp;
- (void).cxx_destruct;

@end
