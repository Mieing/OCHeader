@class NSString;

@interface MMFinderLiveLegalPromotConfig : NSObject

@property (retain, nonatomic) NSString *dynamicConfigKey;
@property (nonatomic) unsigned int legalType;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *legalTitle;
@property (retain, nonatomic) NSString *legalUrl;
@property (nonatomic) BOOL needShowLegalPromot;

- (id)initWithDynamicConfigKey:(id)a0;
- (void)updateWithDynamicConfigKey:(id)a0;
- (void)markAsRead;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
