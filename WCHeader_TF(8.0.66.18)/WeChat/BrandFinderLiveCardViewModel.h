@class NSString;

@interface BrandFinderLiveCardViewModel : MMObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) NSString *liveStatusWording;
@property (nonatomic) double cornerRadius;

- (id)description;
- (double)backgroundCoverHeight:(double)a0;
- (double)cardHeight:(double)a0;
- (double)titleMaxWidth:(double)a0;
- (id)titleColor;
- (id)titleFont;
- (double)titleLineSpacing;
- (double)titleLineNumber;
- (unsigned long long)titleParserDetectorTypes;
- (id)recommendReasonLabelColor;
- (id)accessibilityStr;
- (void).cxx_destruct;

@end
