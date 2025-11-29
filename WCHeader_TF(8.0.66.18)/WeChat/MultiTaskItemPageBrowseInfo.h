@class NSString;

@interface MultiTaskItemPageBrowseInfo : NSObject

@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSString *ItemSubId;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long lastStartTime;

- (void).cxx_destruct;

@end
