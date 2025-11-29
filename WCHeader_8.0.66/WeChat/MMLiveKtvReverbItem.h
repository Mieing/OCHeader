@class NSString;

@interface MMLiveKtvReverbItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *thumbnailUri;

+ (id)reverbItemWithResource:(id)a0;

- (void).cxx_destruct;

@end
