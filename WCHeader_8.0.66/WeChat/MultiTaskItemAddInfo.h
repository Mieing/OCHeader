@class NSString;

@interface MultiTaskItemAddInfo : NSObject

@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long addType;
@property (nonatomic) BOOL isExist;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSString *ItemSubId;
@property (nonatomic) long long taskCount;

- (void).cxx_destruct;

@end
