@class NSString;

@interface MMLiveGenericStatisticsItem : NSObject

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *caption;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) unsigned long long semantic;

+ (id)genericStatisticsItemWithBackendModel:(id)a0;

- (void).cxx_destruct;

@end
