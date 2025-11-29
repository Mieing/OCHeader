@class CSJLoadingInfo;

@interface CSJPlayableCommonInfo : NSObject <NSCoding>

@property (retain, nonatomic) CSJLoadingInfo *loadingInfo;
@property (nonatomic) BOOL is_playable_top_priority;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
