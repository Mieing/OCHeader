@class NSString, HMDCrashSegment, HMDCrashBinaryImage;

@interface HMDCrashVMRegion : HMDCrashModel

@property (nonatomic) int protection;
@property (nonatomic) int max_protection;
@property (nonatomic) unsigned int user_tag;
@property (nonatomic) unsigned long long resident_size;
@property (nonatomic) unsigned long long swapped_size;
@property (nonatomic) unsigned long long dirty_size;
@property (nonatomic) unsigned char share_mode;
@property (nonatomic) unsigned char external_pager;
@property (copy, nonatomic) NSString *file;
@property (nonatomic) unsigned long long base;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *protectionString;
@property (copy, nonatomic) NSString *userTagString;
@property (copy, nonatomic) NSString *shareModeString;
@property (retain, nonatomic) HMDCrashSegment *segment;
@property (retain, nonatomic) HMDCrashBinaryImage *image;

- (id)postDict;
- (id)protectionString:(int)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
