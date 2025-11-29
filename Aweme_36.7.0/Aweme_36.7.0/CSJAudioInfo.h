@class NSString;

@interface CSJAudioInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *audio_url;
@property (copy, nonatomic) NSString *file_hash;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) long long size;
@property (nonatomic) long long cache_type;
@property (nonatomic) long long duaration;
@property (nonatomic) long long preload_size;

- (BOOL)validAudioInfo;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
