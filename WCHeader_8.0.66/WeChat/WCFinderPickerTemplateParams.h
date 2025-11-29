@class NSString, NSMutableArray;

@interface WCFinderPickerTemplateParams : NSObject

@property (nonatomic) BOOL forbidChangeMusic;
@property (retain, nonatomic) NSMutableArray *omjTemplates;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL showLegalTipsViewIfNeed;
@property (nonatomic) unsigned long long eventId;
@property (copy, nonatomic) NSString *followFeedId;

- (id)currentSelectedTemplateId;
- (void).cxx_destruct;

@end
