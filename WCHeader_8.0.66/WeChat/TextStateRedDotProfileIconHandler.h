@class MemoryMappedKV, NSCalendar, NSString, TextStateRedDotProfileIconConfig;

@interface TextStateRedDotProfileIconHandler : TextStateRedDotBaseHandler

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (retain, nonatomic) NSString *configString;
@property (retain, nonatomic) TextStateRedDotProfileIconConfig *config;

+ (id)keyFromDuration:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)init;
- (void)reloadConfigIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hitDuration;
- (unsigned int)configType;
- (void)onConfigChange;
- (BOOL)active;
- (BOOL)dispose;
- (void).cxx_destruct;

@end
