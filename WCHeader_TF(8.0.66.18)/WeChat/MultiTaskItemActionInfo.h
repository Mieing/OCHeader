@class NSString;

@interface MultiTaskItemActionInfo : NSObject

@property (retain, nonatomic) NSString *contextId;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long position;
@property (nonatomic) unsigned long long exposeTimestamp;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSString *ItemSubId;
@property (nonatomic) unsigned long long lastExposeTimestamp;
@property (nonatomic) unsigned long long importTImestamp;
@property (nonatomic) unsigned long long aliveTime;
@property (nonatomic) long long operationPath;

- (void).cxx_destruct;

@end
