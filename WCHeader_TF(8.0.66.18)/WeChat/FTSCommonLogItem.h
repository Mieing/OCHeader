@class NSString;

@interface FTSCommonLogItem : NSObject

@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) unsigned long long clickType;
@property (nonatomic) unsigned int row;
@property (nonatomic) unsigned long long matchType;

- (id)initWithParams:(id)a0;
- (void)parse:(id)a0;
- (void)report;
- (void).cxx_destruct;

@end
