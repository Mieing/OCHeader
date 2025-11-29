@class NSString, NSMutableArray;

@interface FinderLiveTagInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableArray *subTagList;
@property (retain, nonatomic) FinderLiveTagInfo *chosenSubTag;
@property (nonatomic) unsigned int showPrimaryTag;
@property (nonatomic) unsigned int needPoi;

+ (void)initialize;

@end
