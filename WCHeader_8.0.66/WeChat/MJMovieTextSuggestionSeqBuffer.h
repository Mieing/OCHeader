@class NSString;

@interface MJMovieTextSuggestionSeqBuffer : NSObject <PBCoding>

@property (nonatomic) unsigned long long seqNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_seqNumber;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
