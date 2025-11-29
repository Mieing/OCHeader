@class AWESearchAIQueryTemplateAnchorManager, NSString, NSDictionary, UIImage, AWEImageAlbumBSModel;

@interface AWESearchHomeNewStyleSearchBarQueryContext : NSObject

@property (retain, nonatomic) AWESearchAIQueryTemplateAnchorManager *aiQueryTemplateAnchorManager;
@property (copy, nonatomic) NSString *textQuery;
@property (retain, nonatomic) AWEImageAlbumBSModel *imageModel;
@property (retain, nonatomic) UIImage *originImage;
@property (nonatomic) BOOL deepThinkIsOpen;
@property (nonatomic) BOOL isSuperAgentOpen;
@property (nonatomic) BOOL isReplaceEnterFrom;
@property (nonatomic) BOOL isReplaceSearchSource;
@property (nonatomic) BOOL isUserEditAndSearch;
@property (nonatomic) unsigned long long queryType;
@property (nonatomic) unsigned long long searchMethod;
@property (nonatomic) double vosDuration;
@property (copy, nonatomic) NSString *vosid;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *userGuideInfo;
@property (copy, nonatomic) NSString *originEnterMethod;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchSource;
@property (nonatomic) BOOL hasNetworkError;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchUniqueID;
@property (copy, nonatomic) NSString *replayID;
@property (copy, nonatomic) NSString *nextKey;
@property (nonatomic) double responseTimeStamp;
@property (nonatomic) BOOL isForceNoSave;

+ (id)stringFromQueryContext:(id)a0;
+ (id)dictFromQueryContext:(id)a0;
+ (id)queryContextFromDict:(id)a0;
+ (id)queryContextFromString:(id)a0;

- (BOOL)isPicTextSearch;
- (void)configWithInputViewResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
