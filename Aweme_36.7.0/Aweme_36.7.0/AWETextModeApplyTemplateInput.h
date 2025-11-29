@class NSString, NSArray, AWEVideoPublishViewModel;

@interface AWETextModeApplyTemplateInput : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *categoryNameList;
@property (nonatomic) BOOL shouldDisableDefaultCategory;
@property (nonatomic) long long applyTemplatesStartIndex;
@property (nonatomic) long long applyTemplatesEndIndex;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *templateIDs;

- (void).cxx_destruct;

@end
