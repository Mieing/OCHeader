@class NSString, NSDictionary, AWEAwemeModel;

@interface AFDRichAwemeFullPageContext : AWEPageContext

@property (nonatomic) long long sliderCurrentIndex;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *priorityType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (nonatomic) unsigned long long defaultPlayMode;
@property (readonly, nonatomic) unsigned long long playMode;
@property (readonly, nonatomic) long long totalImageCount;
@property (readonly, nonatomic) BOOL isSingleImage;
@property (readonly, nonatomic) BOOL isSliderAtTail;
@property (copy, nonatomic) NSString *searchParams;

- (BOOL)p_isUnfollowFamiliar;
- (void).cxx_destruct;

@end
