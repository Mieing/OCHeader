@class NSArray, NSString, NSData, NSMutableArray;

@interface WCFinderBgmListOptionalParams : NSObject

@property (copy, nonatomic) NSData *classifyResultData;
@property (retain, nonatomic) NSArray *miaojianMusicIds;
@property (copy, nonatomic) NSString *miaojianTemplateId;
@property (nonatomic) unsigned long long finderEnterScene;
@property (retain, nonatomic) NSMutableArray *assertItems;
@property (nonatomic) unsigned long long previewTimelineDuration;

- (void).cxx_destruct;

@end
