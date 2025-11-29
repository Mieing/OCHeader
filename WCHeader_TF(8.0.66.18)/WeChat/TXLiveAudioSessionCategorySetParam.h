@class NSString;

@interface TXLiveAudioSessionCategorySetParam : NSObject

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *mode;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL optionsForbidModify;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)genFromCategorySetParam:(id)a0;
- (void).cxx_destruct;

@end
