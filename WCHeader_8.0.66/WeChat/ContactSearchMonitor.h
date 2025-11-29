@interface ContactSearchMonitor : NSObject

@property (nonatomic) unsigned long long pinyinSearchTime;
@property (nonatomic) unsigned long long mainSearchTime;
@property (nonatomic) unsigned long long getContentTime;
@property (nonatomic) unsigned long long sortTime;
@property (nonatomic) unsigned long long singleContactTime;
@property (nonatomic) unsigned long long groupContactTime;
@property (nonatomic) unsigned long long totalTime;
@property (nonatomic) unsigned long long singleContactCount;
@property (nonatomic) unsigned long long groupContactCount;
@property (nonatomic) unsigned long long groupMemberCount;
@property (nonatomic) unsigned long long totalContactCount;
@property (nonatomic) unsigned long long searchWordLength;
@property (nonatomic) unsigned long long keywordNum;
@property (nonatomic) unsigned int memSearchCount;
@property (nonatomic) unsigned long long memSearchTime;
@property (nonatomic) unsigned long long tagSearchTime;
@property (nonatomic) unsigned long long zoneSearchTime;
@property (nonatomic) unsigned long long multiKeywordSearchTime;

@end
